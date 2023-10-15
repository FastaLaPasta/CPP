#include "WrongAnimal.hpp"

/*---------------------Constructors/Destructor---------------------*/

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal Default construcor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string child ) {
    this->type = child;
    std::cout << "WrongAnimal Type construcor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src) {
    *this = src;
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal & src ) {
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    WrongAnimal::makeSound( void ) const {
    std::cout << "WROOOOOOOOOOOOOOONG" << std::endl;
}

/*---------------------Utils function---------------------*/

std::string WrongAnimal::getType( void ) const {
    return (this->type);
}