#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
    
    public:
    Weapon(std::string  Weapon_type);
    ~Weapon();
    const std::string&  getType();
    void                setType(std::string type);

    private:
    std::string _type;
};

const std::string&  getType();

#endif