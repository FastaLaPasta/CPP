#include "Span.hpp"
#include <limits>

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
    int shortest = 2146473647;
    int tmp;
    for (std::multiset<int>::iterator it = this->tab.begin(); it != this->tab.end(); it++) {
        tmp = *it;
        if (*(it + 1) - *it < shortest)
        shortest = (*it + 1) - *it < shortest;
    }
    return (tmp);
}