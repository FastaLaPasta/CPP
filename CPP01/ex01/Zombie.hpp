#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    public:

    void    announce(void);
    Zombie* zombieHorde( int N, std::string name );
    void    set_name(std::string name);
    Zombie();
    ~Zombie();

    private:
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif