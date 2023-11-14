#include "Span.hpp"

int main(void) {
    try
    {
        Span myFirstSpan(5);
        myFirstSpan.addNumber(10);
        myFirstSpan.addNumber(5);
        myFirstSpan.addNumber(2);
        myFirstSpan.addNumber(42);
        myFirstSpan.addNumber(69);
        // myFirstSpan.addNumber(-1);
        std::cout << myFirstSpan.longestSpan() << std::endl;
        std::cout << myFirstSpan.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}