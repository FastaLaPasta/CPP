#include "Animal.hpp"

/*---------------------Constructors/Destructor---------------------*/

Animal::Animal() {
    std::cout << "Animal Default construcor called" << std::endl;
}

Animal::Animal( std::string child ) {
    this->type = child;
    std::cout << "Animal Type construcor called" << std::endl;
}

Animal::Animal( const Animal & src) {
    *this = src;
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=( const Animal & src ) {
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    Animal::makeSound( void ) const {
    std::cout << "Grrrrr....." << std::endl;
}

/*---------------------Utils function---------------------*/

std::string Animal::getType( void ) const {
    return (this->type);
}