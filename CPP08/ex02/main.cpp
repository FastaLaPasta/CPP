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
        std::cout << "i" << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack); // Can still be used as a regular std::stack

    return 0;
}