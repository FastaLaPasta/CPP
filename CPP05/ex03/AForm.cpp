#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(const AForm& src) : name(src.name), isSigned(src.isSigned), signeRequirement(src.signeRequirement), execRequirement(src.execRequirement) {

}

AForm::AForm(std::string const name, int const signGrade, int const execGrade) : name(name), signeRequirement(signGrade), execRequirement(execGrade) {
    this->isSigned = 0;
}

AForm::~AForm() {

}

AForm&   AForm::operator=(const AForm& src) {
    this->isSigned = src.isSigned;
    return (*this);
}

std::string AForm::getName() const {
    return (this->name);
}

int AForm::getSignRequirement() const {
    return (this->signeRequirement);
}

int AForm::getExecRequirement() const {
    return (this->execRequirement);
}

void    AForm::beSigned(const Bureaucrat& src) {
    if (src.getGrade() <= this->signeRequirement) {
        this->isSigned = 1;
    }   else {
        throw (GradeTooLowException());
    }
}

const char*  AForm::GradeTooHighException::what() const throw() {
    return ("Grade is to High in the sky");
}

const char*  AForm::GradeTooLowException::what() const throw() {
    return ("Grade is to Low, to dumb");
}

const char*  AForm::FormNotSignedException::what() const throw() {
    return ("Nobody smart enough to sign the Form");
}

bool    AForm::getIsSigned() const {
    return (this->isSigned);
}

std::ostream&   operator<<(std::ostream &output, AForm const& src) {
    output << "Name " << src.getName() << " | signe grade requirement: " << src.getSignRequirement() << " | execute grade requirement: " << src.getExecRequirement() << " | am I signed  ? : " << std::boolalpha << src.getIsSigned() << std::endl;
    return (output);
}

void    AForm::execute(const Bureaucrat& executor) const {
    if (!this->isSigned)
        throw (FormNotSignedException());
    if (executor.getGrade() >= getExecRequirement())
        throw (GradeTooLowException());

    executeAction();
}