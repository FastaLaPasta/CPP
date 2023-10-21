#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class ICharacter;

class AMateria {
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const AMateria& src);
        AMateria(std::string const& type);
        virtual ~AMateria();
        AMateria&   operator=(const AMateria & src);
        std::string const& getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif