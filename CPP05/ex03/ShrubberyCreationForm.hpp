#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(const ShrubberyCreationForm& src);
        ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& src);
        ~ShrubberyCreationForm();
        std::string const   getTargetName() const;
    private:
        void    executeAction() const;
        ShrubberyCreationForm();
        std::string   targetName;
};

#endif