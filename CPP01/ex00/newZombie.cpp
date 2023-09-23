#include "Zombie.hpp"

Zombie  *newZombie(std::string name){
    Zombie *zomb;
    try{
        zomb = new Zombie(name);
    }
    catch(const std::exception& e)
    {
        std::cerr << "an error occured : " << e.what() << '\n';
    }
    return (zomb);
}