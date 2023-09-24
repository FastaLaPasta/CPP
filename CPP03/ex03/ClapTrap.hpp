#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap & src );

    ClapTrap&   operator=( const ClapTrap & src);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    unsigned int getHitPoint( void ) const;
    unsigned int getEnergyPoint( void ) const;
    unsigned int getAttackDamage( void ) const;

protected:
    unsigned int    _Hit_Points;
    unsigned int    _Energy_Points;
    unsigned int    _Attack_Damages;
    std::string     _name;
};

#endif