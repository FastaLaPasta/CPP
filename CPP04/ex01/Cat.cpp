#include "Cat.hpp"

/*---------------------Constructors/Destructor---------------------*/

Cat::Cat() : Animal("Cat") {
    this->_catBrain = new Brain();
    std::cout << "Cat Default construcor called" << std::endl;
}

Cat::Cat( const Cat & src) : Animal(src) {
    *this = src;
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete(_catBrain);
}

Cat& Cat::operator=( const Cat & src ) {
    Brain *brain = new Brain();
    this->_catBrain = brain;
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    Cat::makeSound( void ) const {
    std::cout << "MIAOU MIAOU NIGERIAN" << std::endl;
}