#include "WrongCat.hpp"

/*---------------------Constructors/Destructor---------------------*/

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat Default construcor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src) : WrongAnimal(src) {
    *this = src;
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat & src ) {
    this->type = src.type;
    return (*this);
}

/*---------------------Action function---------------------*/

void    WrongCat::makeSound( void ) const {
    std::cout << "CATCATCATCATCATCAT" << std::endl;
}