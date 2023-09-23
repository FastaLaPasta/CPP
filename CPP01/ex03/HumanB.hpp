#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB{
    public:

    HumanB(std::string name);
    ~HumanB();
    void    setWeapon(Weapon &Weapon);
    void    attack();

    private:
    Weapon      *_Weapon;
    std::string _name;
};

#endif