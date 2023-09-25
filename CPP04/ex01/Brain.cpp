#include "Brain.hpp"

Brain::Brain() {
    ideas = new std::string[100];
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain & src ) {
    *this = src;
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain() {
    delete[]ideas;
    std::cout << "Brain destructor called" << std::endl;
}

Brain&  Brain::operator=( const Brain & src ) {
    std::copy(src.ideas, src.ideas + 100, this->ideas);
    return (*this);
}
