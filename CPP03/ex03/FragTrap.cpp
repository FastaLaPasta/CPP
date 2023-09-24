#include "FragTrap.hpp"

/*---------------------Constructors/Destructor---------------------*/

FragTrap::FragTrap() : ClapTrap() {
    this->_Hit_Points = 100;
    this->_Energy_Points = 50;
    this->_Attack_Damages = 20;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap() {
    this->_name = name;
    this->_Hit_Points = 100;
    this->_Energy_Points = 50;
    this->_Attack_Damages = 20;
    std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap() {
    *this = src;
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap & src ) {
    this->_Hit_Points = src._Hit_Points;
    this->_Energy_Points = src._Energy_Points;
    this->_Attack_Damages = src._Attack_Damages;
    this->_name = src._name;
    return *this;
}

/*---------------------Action function---------------------*/

void    FragTrap::highFivesGuys( void ) const {
    std::cout << "Give me five!" << std::endl;
}
