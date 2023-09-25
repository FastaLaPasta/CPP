#include "Cat.hpp"

/*---------------------Constructors/Destructor---------------------*/

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat Default construcor called" << std::endl;
}

Cat::Cat( const Cat & src) : Animal(src) {
    *this = src;
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat & src ) {
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    Cat::makeSound( void ) const {
    std::cout << "MIAOU MIAOU NIGERIAN" << std::endl;
}