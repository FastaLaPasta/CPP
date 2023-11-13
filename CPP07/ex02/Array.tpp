#include "Array.hpp"

template<typename T> 
Array<T>::Array() : lenght(0) {
    this->array = new T[0]();
}

template<typename T>
Array<T>::~Array() {
    delete[] this->array;
}

template<typename T>
Array<T>::Array(unsigned int n) : lenght(n) {
    this->array = new T[n]();
}

template<typename T>
Array<T>::Array(const Array& src) {
    this->array = new T[src.size()];
    this->lenght = src.size();
}

template<typename T>
Array<T>&  Array<T>::operator=(const Array& src) {
    delete[] this->array;
    this->array = new T[src.size()];
    this->lenght = src.size();
    return (*this);
}

template<typename T>
T&   Array<T>::operator[](unsigned int idx) const {
    if (idx >= 0 && idx < this->size()) {
        return (this->array[idx]);
    }
    throw(std::invalid_argument("Out of bounds"));
}

template<typename T>
    unsigned int    Array<T>::size() const {
    return (this->lenght);
}