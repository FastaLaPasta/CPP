#include "ScavTrap.hpp"

/*---------------------Constructors/Destructor---------------------*/

ScavTrap::ScavTrap() : ClapTrap() {
    this->_Hit_Points = 100;
    this->_Energy_Points = 50;
    this->_Attack_Damages = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap() {
    this->_name = name;
    this->_Hit_Points = 100;
    this->_Energy_Points = 50;
    this->_Attack_Damages = 20;
    std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap() {
    *this = src;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap & src ) {
    this->_Hit_Points = src._Hit_Points;
    this->_Energy_Points = src._Energy_Points;
    this->_Attack_Damages = src._Attack_Damages;
    this->_name = src._name;
    return *this;
}

/*---------------------Action function---------------------*/

void    ScavTrap::guardGate( void ) const{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack( const std::string& target ) {
    if (this->_Energy_Points > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_Attack_Damages << " points of damage!" << std::endl;
        _Energy_Points--;
    }
    else
        std::cout << "Action failed.. Not enough energy" << std::endl;
}
