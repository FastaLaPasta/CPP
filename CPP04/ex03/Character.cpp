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
        this->_inventory[i] = src._inventory[i];
    } 
}

Character&  Character::operator=(const Character& src) {
    this->_name = src._name;
    for (size_t i = 0; i < 4; i++) {
        delete this->_inventory[i];
        this->_inventory[i] = src._inventory[i];
    }
}

Character::~Character() {
    delete[] this->_inventory;
}

std::string const&  Character::getName() {
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
 // A COMPLETER !!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

void    Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4) {
        this->_inventory[idx].use(target); 
    } else {
        std::cout << "Wrong inventory index" << std::endl;
    }
}