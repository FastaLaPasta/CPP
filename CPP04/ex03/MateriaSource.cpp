#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (size_t i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& src) {
    for (size_t i = 0; i < 4; i++) {
        this->_inventory[i] = src._inventory[i];
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& src) {
    for (size_t i = 0; i < 4; i++) {
        this->_inventory[i] = src._inventory[i];
    }
}

MateriaSource::~MateriaSource() {
    delete[] this->_inventory;
}

void    MateriaSource::learnMateria(AMateria* src) {
    for (size_t i = 0; i < 4; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = src;
            return;
        }
    }
    std::cout << "Source full" << std::endl;
}

AMateria*    MateriaSource::createMateria(std::string const& type) {
    if (type.compare("ice") == 0) {
        AMateria* m = new Ice();
        return (m);
    } else if (type.compare("cure") == 0) {
        AMateria* m = new cure();
        return (m);
    }
    return (0);
    // peut etre utiliser clone ici
}