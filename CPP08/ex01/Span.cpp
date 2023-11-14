#include "Span.hpp"
#include <limits>
#include <iterator>

Span::Span(unsigned int N) {
    // if (N <= std::numeric_limits<unsigned int>::max()) {
        this->size = N;
    // } else {
    //     throw std::invalid_argument("Bad N input");
    // }
}

Span::Span(const Span& src) {
    this->size = src.size;
    this->tab = src.tab;
}

Span&   Span::operator=(const Span& src) {
    this->size = src.size;
    this->tab = src.tab;
    return (*this);
}

Span::~Span() {

}

void    Span::addNumber(int num) {
    if (this->tab.size() < this->size) {
        this->tab.insert(num);
    } else {
        throw (std::invalid_argument("span is full"));
    }
}

int Span::longestSpan() {

    if (this->tab.size() < 2)
        throw (std::invalid_argument("to short span"));
    return (*this->tab.rbegin() - *this->tab.begin());
}

int Span::shortestSpan() {
    if (tab.size() < 2) {
        throw std::logic_error("Span to short");
    }

    int shortest = std::numeric_limits<int>::max();
    std::multiset<int>::iterator it = tab.begin();
    int current = *it;

    while (++it != tab.end()) {
        if (*it - current < shortest) {
            shortest = *it - current;
        }
        current = *it;
    }
    return (shortest);
}