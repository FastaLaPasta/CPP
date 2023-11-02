#include "Iter.hpp"

template<typename T>
void    listed(T& array) {
    std::cout << array << std::endl;
}

template<typename T>
int    listed(T& array) {
    std::cout << array + 1 << std::endl;
    return(1);
}

int main(void) {
    // int array[] = {1, 1, 2, 3};
    std::string array2[] = {"test", "lol"};

    iter<std::string, void (std::string&)>(array2, 2, listed<std::string>);
    return (0);
}