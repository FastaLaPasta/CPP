#include "Dog.hpp"

/*---------------------Constructors/Destructor---------------------*/

Dog::Dog() : AAnimal("Dog") {
    _dogBrain = new Brain();
    std::cout << "Dog Default construcor called" << std::endl;
}

Dog::Dog( const Dog & src) : AAnimal(src) {
    *this = src;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete(_dogBrain);
}

Dog& Dog::operator=( const Dog & src ) {
    Brain *brain = new Brain();
    this->_dogBrain = brain;
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    Dog::makeSound( void ) const {
    std::cout << "Who lets the dog out ??WOAF.. WOAF WOAF.. WOAF" << std::endl;
}