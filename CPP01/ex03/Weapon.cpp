#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon_type){
    Weapon::setType(Weapon_type);
}

void    Weapon::setType(std::string type){
    this->_type = type;
}

const std::string&  Weapon::getType(){
    const std::string& type = this->_type;
    return(type);
}

Weapon::~Weapon(){

}