#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::AMateria(const AMateria& src) {
    this->type = src.type;
}

AMateria::AMateria(std::string const& type) {
    this->type = type;
}

AMateria&   AMateria::operator=(const AMateria& src) {
    this->type = src.type;
    return (*this);
}

AMateria::~AMateria() {

}

std::string const& AMateria::getType() const {
    return (this->type);
}

void    AMateria::use(ICharacter& target) {
    (void) target;
    std::cout << "* nothing happened *" << std::endl; 
}
