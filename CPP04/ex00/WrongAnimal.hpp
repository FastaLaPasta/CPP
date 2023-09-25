#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal( std::string child);
    WrongAnimal( const WrongAnimal & src );

    WrongAnimal& operator=( const WrongAnimal & src );
    void    makeSound( void ) const;
    std::string getType( void ) const;

protected:
    std::string type;
};

#endif