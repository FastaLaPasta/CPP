#include "ClapTrap.hpp"

/*---------------------Constructors/Destructor---------------------*/

ClapTrap::ClapTrap() {
    _Hit_Points = 10;
    _Energy_Points = 10;
    _Attack_Damages = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
    _Hit_Points = 10;
    _Energy_Points = 10;
    _Attack_Damages = 0;
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ) {
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap & src ) {
    this->_Hit_Points = src._Hit_Points;
    this->_Energy_Points = src._Energy_Points;
    this->_Attack_Damages = src._Attack_Damages;
    this->_name = src._name;
    return *this;
}

/*---------------------Action functions---------------------*/

void    ClapTrap::attack( const std::string& target ) {
    if (this->_Energy_Points > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_Attack_Damages << " points of damage!" << std::endl;
        _Energy_Points--;
    }
    else
        std::cout << "Action failed.. Not enough energy" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (this->_Energy_Points > 0) {
        if (this->_Hit_Points >= amount)
            this->_Hit_Points -= amount;
        else
            this->_Hit_Points = 0;
        _Energy_Points--;
        std::cout << "ClapTrap " << this->_name << " have take an amount of  " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "Action failed.. Not enough energy" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (this->_Energy_Points > 0) {
        this->_Hit_Points += amount;
        _Energy_Points--;
        std::cout << "ClapTrap " << this->_name << " have recover an amount of  " << amount << " Hit Points!" << std::endl;
    }
    else
        std::cout << "Action failed.. Not enough energy" << std::endl;
}

/*---------------------Utils functions---------------------*/

unsigned int    ClapTrap::getAttackDamage( void ) const {
    return (_Attack_Damages);
}

unsigned int    ClapTrap::getEnergyPoint( void ) const {
    return (_Energy_Points);
}

unsigned int    ClapTrap::getHitPoint( void ) const {
    return (_Hit_Points);
}