#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
public:
    // Explicitly define iterator and const_iterator
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    // ... (other member functions from std::stack)

    // Iterator definitions
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const_iterator cbegin() const { return this->c.begin(); }
    const_iterator cend() const { return this->c.end(); }
};

#endif