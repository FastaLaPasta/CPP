#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
    Ice();
    Ice(const Ice& src);
    Ice&    operator=(const Ice& src);
    ~Ice();
    virtual AMateria* clone() const;
};

#endif