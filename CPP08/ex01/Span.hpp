#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <list>
#include <set>

class Span {
    public:
        Span(unsigned int N);
        Span(const Span& src);
        Span&   operator=(const Span& src);
        ~Span();

        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();

        template <typename Container>
        void addRange(const Container& container) {
            for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it) {
                addNumber(*it);
            }
        }

    private:
        Span();
        unsigned int        idx;
        std::multiset<int>  tab;
        unsigned int        size;
};

#endif