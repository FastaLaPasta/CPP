#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap & src );

    DiamondTrap&    operator=( const DiamondTrap & src);

    void            whoAmI( void ) const;
private:
    std::string _name;
};

#endif