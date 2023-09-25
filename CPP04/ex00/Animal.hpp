#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal( std::string child);
    Animal( const Animal & src );

    Animal& operator=( const Animal & src );
    virtual void    makeSound( void ) const;
    std::string getType( void ) const;

protected:
    std::string type;
};

#endif