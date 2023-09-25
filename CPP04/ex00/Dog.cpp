#include "Dog.hpp"

/*---------------------Constructors/Destructor---------------------*/

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog Default construcor called" << std::endl;
}

Dog::Dog( const Dog & src) : Animal(src) {
    *this = src;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog & src ) {
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    Dog::makeSound( void ) const {
    std::cout << "Who lets the dog out ??WOAF.. WOAF WOAF.. WOAF" << std::endl;
}