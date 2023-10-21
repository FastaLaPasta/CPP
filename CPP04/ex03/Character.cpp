#include "Character.hpp"

Character::Character() {
    for (size_t i = 0; i < 4; i++) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(std::string name) {
    this->_name = name;
    for (size_t i = 0; i < 4 ; i++) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(const Character& src) {
    this->_name = src._name;
    for (size_t i = 0; i < 4; i++) {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = 0;
    } 
}

Character&  Character::operator=(const Character& src) {
    this->_name = src._name;
    for (size_t i = 0; i < 4; i++) {
        delete this->_inventory[i];
        if(src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = 0;
    }
    return (*this);
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        delete _inventory[i];
    }
}

std::string const&  Character::getName() const {
    return (this->_name);
}

void    Character::equip(AMateria* m) {
    for (size_t i = 0; i < 4; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = m;
            return ;
        }
    }
    std::cout << "Inventory full" << std::endl;
}

void    Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        _inventory[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        this->_inventory[idx]->use(target); 
    } else {
        std::cout << "Wrong inventory index" << std::endl;
    }
}