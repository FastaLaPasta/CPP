#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& src);
        Array&  operator=(const Array& src);
        T&  operator[](unsigned int idx) const;
        ~Array();
        unsigned int    size() const;

    private:
        T*              array;
        unsigned int    lenght;
};

#include "Array.tpp"

#endif