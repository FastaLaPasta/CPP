#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure {
    Cure();
    Cure(const Cure& src);
    Cure&    operator=(const Cure& src);
    ~Cure();
    virtual AMateria* clone() const;
};

#endif