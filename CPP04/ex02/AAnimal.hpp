#ifndef AAnimal_HPP
#define AAnimal_HPP
#include <iostream>

class AAnimal {
public:

    virtual ~AAnimal();
    AAnimal( std::string child);
    AAnimal( const AAnimal & src );

    AAnimal& operator=( const AAnimal & src );
    virtual void    makeSound( void ) const = 0;
    std::string getType( void ) const;

protected:
    AAnimal(); 
    std::string type;
};

#endif