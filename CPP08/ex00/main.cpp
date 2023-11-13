#include "Easyfind.hpp"

int main(void) {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    std::list<int> l;
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    l.push_back(10);
    std::vector<int>::iterator it = easyfind(v, 1);
    if (it != v.end()) {
        std::cout << "find in " << distance(v.begin(), it) << " index" << std::endl; 
    } else {
        std::cout << "Value not found" << std::endl;
        return (1);
    }
    std::list<int>::iterator il = easyfind(l, 9);
    if (il != l.end()) {
        std::cout << "find in " << distance(l.begin(), il) << " index" << std::endl; 
    } else {
        std::cout << "Value not found" << std::endl;
        return (1);
    }
    return (0);
}