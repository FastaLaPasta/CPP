#include "Form.hpp"

Form::Form(const Form& src) : name(src.name), isSigned(src.isSigned), signeRequirement(src.signeRequirement), execRequirement(src.execRequirement) {

}

Form::Form(std::string const name, int const signGrade, int const execGrade) : name(name), signeRequirement(signGrade), execRequirement(execGrade) {
    this->isSigned = 0;
}

Form::~Form() {

}

Form&   Form::operator=(const Form& src) {
    this->isSigned = src.isSigned;
    return (*this);
}

std::string Form::getName() const {
    return (this->name);
}

int Form::getSignRequirement() const {
    return (this->signeRequirement);
}

int Form::getExecRequirement() const {
    return (this->execRequirement);
}

void    Form::beSigned(const Bureaucrat& src) {
    if (src.getGrade() <= this->signeRequirement) {
        this->isSigned = 1;
    }   else {
        throw (GradeTooLowException());
    }
}

const char*  Form::GradeTooHighException::what() const throw() {
    return ("Grade is to High in the sky");
}

const char*  Form::GradeTooLowException::what() const throw() {
    return ("Grade is to Low, to dumb to sign");
}

bool    Form::getIsSigned() const {
    return (this->isSigned);
}

std::ostream&   operator<<(std::ostream &output, Form const& src) {
    output << "Name " << src.getName() << " | signe grade requirement: " << src.getSignRequirement() << " | execute grade requirement: " << src.getExecRequirement() << " | am I signed  ? : " << std::boolalpha << src.getIsSigned() << std::endl;
    return (output);
}