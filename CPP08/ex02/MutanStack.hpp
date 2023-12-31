#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const_iterator cbegin() const { return this->c.begin(); }
    const_iterator cend() const { return this->c.end(); }
};

#endif