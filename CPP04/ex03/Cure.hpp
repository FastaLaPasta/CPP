#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
    Cure();
    Cure(const Cure& src);
    Cure&    operator=(const Cure& src);
    ~Cure();
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};

#endif