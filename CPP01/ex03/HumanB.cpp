#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
    this->_Weapon = NULL;
}

void    HumanB::attack(){
    if (this->_Weapon != NULL && this->_Weapon->getType() != "") {
    std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
    }
    else {
        std::cout << "No gun No Life" << std::endl;
    }
}

void    HumanB::setWeapon(Weapon& Weapon){
    this->_Weapon = &Weapon;
}

HumanB::~HumanB(){

}