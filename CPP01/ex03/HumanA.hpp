#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"

class HumanA{
    public:
    HumanA(std::string name, Weapon& Weapon);
    ~HumanA();
    void    attack();

    private:
    std::string _name;
    Weapon&      _Weapon;
    
};

#endif