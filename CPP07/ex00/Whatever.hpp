#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
class Whatever {
    public:
        static void    swap(T &argOne, T &argTwo);
        static T       min(T argOne, T argTwo);
        static T       max(T argOne, T argTwo);
    private:
        Whatever();
};

#include "Whatever.tpp"

#endif