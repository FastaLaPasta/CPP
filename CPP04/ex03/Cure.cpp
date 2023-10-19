#include "Cure.hpp"

Cure::Cure() {
    this->type = "cure";
}

Cure::Cure(const Cure& src) {
    this->type = src.type;
}

Cure&   Cure::operator=(const Cure& src) {
    this->type = src.type;
}

Cure::~Cure() {

}

void    Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*   Cure::clone() const{
    AMateria* clone = new Cure();
    return (clone);
}