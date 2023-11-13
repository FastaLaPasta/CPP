#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
#include <vector>
#include <stack>

template<typename T>
typename T::iterator easyfind(T& container, int toFind) {
    typename T::iterator finded = find(container.begin(), container.end(), toFind);
    return (finded);
    //assiociative container have their own .find() method, x: map.find(toFind);
}

#endif