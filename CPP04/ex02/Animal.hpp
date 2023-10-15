#ifndef Animal_HPP
#define Animal_HPP
#include <iostream>

class AAnimal {
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal( std::string child);
    AAnimal( const AAnimal & src );

    AAnimal& operator=( const AAnimal & src );
    virtual void    makeSound( void ) const = 0;
    std::string getType( void ) const;

protected:
    std::string type;
};

#endif