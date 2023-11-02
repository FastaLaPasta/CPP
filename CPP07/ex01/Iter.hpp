#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T, typename Func>
void    iter(T* array, size_t lenght, Func func) {
    for (size_t i = 0; i < lenght && lenght >= 0; i++) {
        func(array[i]);
    }
}

#endif