#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
public:
    Dog();
    ~Dog();
    Dog( const Dog & src );

    Dog& operator=( const Dog & src );
    virtual void    makeSound( void ) const;

private:
    Brain   *_dogBrain;
};

#endif