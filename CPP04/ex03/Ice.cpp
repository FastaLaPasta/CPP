#include "Ice.hpp"

Ice::Ice() {
    this->type = "ice";
}

Ice::Ice(const Ice& src) {
    this->type = src.type;
}

Ice&   Ice::operator=(const Ice& src) {
    this->type = src.type;
}

Ice::~Ice() {

}

void    Ice::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*   Ice::clone() const{
    AMateria* clone = new Ice();
    return (clone);
}