#include "AAnimal.hpp"

/*---------------------Constructors/Destructor---------------------*/

AAnimal::AAnimal() {
    std::cout << "AAnimal Default construcor called" << std::endl;
}

AAnimal::AAnimal( std::string child ) {
    this->type = child;
    std::cout << "AAnimal Type construcor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src) {
    *this = src;
    std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal & src ) {
    this->type = src.type;
    return (*this);
}

/*---------------------Utils function---------------------*/

std::string AAnimal::getType( void ) const {
    return (this->type);
}