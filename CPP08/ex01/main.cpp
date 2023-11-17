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
        std::cout << myFirstSpan.longestSpan() << std::endl;
        std::cout << myFirstSpan.shortestSpan() << std::endl;

        //Remplissage simplifié avec container vector

        Span mySpan(5);
        int arr[] = {1, 2, 3, 4, 5};
        std::vector<int> myNumbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
        mySpan.addRange(myNumbers);
        std::cout << mySpan.longestSpan() << std::endl;
        std::cout << mySpan.shortestSpan() << std::endl;

        //Remplissage simplifié avec container list

        Span mySpanList(5);
        int array[] = {1, 2, 3, 4, 5};
        std::list<int> myNumbersList(array, array + sizeof(array) / sizeof(array[0]));
        mySpanList.addRange(myNumbersList);
        std::cout << mySpanList.longestSpan() << std::endl;
        std::cout << mySpanList.shortestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}