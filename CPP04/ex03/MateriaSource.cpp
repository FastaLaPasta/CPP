#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

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
    return (*this);
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete _inventory[i];
    }
}

void    MateriaSource::learnMateria(AMateria* src) {
    for (size_t i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = src;
            return;
        }
    }
    std::cout << "Source full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (size_t i = 0; i < 4; i++) {
        if (_inventory[i] && _inventory[i]->getType() == type) {
            return _inventory[i]->clone();
        }
    }
    return 0;
}