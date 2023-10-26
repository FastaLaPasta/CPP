#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm::AForm(target, 25, 5) {
    this->targetName = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm::AForm(src.getTargetName(), src.getSignRequirement(), src.getExecRequirement()) {
    this->targetName = src.getTargetName();
}


PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
    this->targetName = src.targetName;
    return (*this);
}

std::string const   PresidentialPardonForm::getTargetName() const {
    return (this->targetName);
}

void    PresidentialPardonForm::executeAction() const {
    std::cout << this->targetName << " has been pardoned by  Zaphod Beeblebrox" << std::endl;
}