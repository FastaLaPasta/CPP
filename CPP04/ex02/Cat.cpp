#include "Cat.hpp"

/*---------------------Constructors/Destructor---------------------*/

Cat::Cat() : AAnimal("Cat") {
    this->_catBrain = new Brain();
    std::cout << "Cat Default construcor called" << std::endl;
}

Cat::Cat( const Cat & src) : AAnimal(src) {
    *this = src;
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete(_catBrain);
}

Cat& Cat::operator=( const Cat & src ) {
    this->_catBrain = src._catBrain;
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    Cat::makeSound( void ) const {
    std::cout << "MIAOU MIAOU NIGERIAN" << std::endl;
}