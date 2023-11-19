#include "MutanStack.hpp"

int main(void) {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top of stack: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "Iterating through MutantStack:" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack); // Can still be used as a regular std::stack

    std::cout << "============================================" << std::endl;

    std::list<int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << "Top of stack: " << l.front() << std::endl;

    l.pop_back();
    std::cout << "Size after pop: " << l.size() << std::endl;

    l.push_back(3);
    l.push_back(5);
    l.push_back(737);

    std::list<int>::iterator it2 = l.begin();
    std::list<int>::iterator ite2 = l.end();

    std::cout << "Iterating through MutantStack:" << std::endl;
    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::list<int> u(l); // Can still be used as a regular std::stack


    return 0;
}