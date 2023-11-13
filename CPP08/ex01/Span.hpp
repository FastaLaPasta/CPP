#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
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
    private:
        Span();
        unsigned int        idx;
        std::multiset<int>  tab;
        unsigned int        size;
};

#endif