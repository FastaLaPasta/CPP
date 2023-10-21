#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() {
    this->type = "ice";
}

Ice::Ice(const Ice& src) {
    this->type = src.type;
}

Ice&   Ice::operator=(const Ice& src) {
    this->type = src.type;
    return (*this);
}

Ice::~Ice() {

}

void    Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*   Ice::clone() const{
    AMateria* clone = new Ice();
    return (clone);
}