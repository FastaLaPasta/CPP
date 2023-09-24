#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Ash");
    clap.attack("Staff");
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    clap.beRepaired(5);
    std::cout << clap.getHitPoint() << " Hit points left." << std::endl;
    clap.beRepaired(5);
    std::cout << clap.getEnergyPoint() << " Energy points left." << std::endl;
    return (0);
}