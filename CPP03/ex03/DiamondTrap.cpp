#include "DiamondTrap.hpp"

/*---------------------Constructors/Destructor---------------------*/

DiamondTrap::DiamondTrap() : FragTrap() ,ScavTrap() {
    this->_Hit_Points = FragTrap::_Hit_Points;
    this->_Energy_Points = ScavTrap::_Energy_Points;
    this->_Attack_Damages = FragTrap::_Attack_Damages;
    std::cout << "DiamondTrap default creator called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : FragTrap(name), ScavTrap(name) {
    this->_Hit_Points = FragTrap::_Hit_Points;
    this->_Energy_Points = ScavTrap::_Energy_Points;
    this->_Attack_Damages = FragTrap::_Attack_Damages;
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    std::cout << "DiamondTrap Name creator called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : FragTrap(src), ScavTrap(src){
    *this = src;
    std::cout << "DiamondTrap Copy creator called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap&    DiamondTrap::operator=( const DiamondTrap & src ) {
    this->_Hit_Points = src._Hit_Points;
    this->_Energy_Points = src._Energy_Points;
    this->_Attack_Damages = src._Attack_Damages;
    this->_name = src._name;
    return (*this);
}

/*---------------------Action function---------------------*/

void    DiamondTrap::whoAmI( void ) const {
    std::cout << "My name is : " << this->_name << " ClapTrap name is : " << ClapTrap::_name << std::endl;
}