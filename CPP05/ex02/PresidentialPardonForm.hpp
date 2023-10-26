#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(const PresidentialPardonForm& src);
        PresidentialPardonForm&  operator=(const PresidentialPardonForm& src);
        ~PresidentialPardonForm();
        std::string const   getTargetName() const;
    private:
        void    executeAction() const;
        PresidentialPardonForm();
        std::string   targetName;
};

#endif