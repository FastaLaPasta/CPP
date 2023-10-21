#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) {
    if (this->grade > 150)
        throw(GradeTooLowException());
    if (this->grade < 1)
        throw(GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    this->name = src.name;
    this->grade = src.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    this->name = src.name;
    this->grade = src.grade;
    return (*this);
}

std::ostream&   Bureaucrat::operator<<( std::ostream &output, Bureaucrat const& src) {
    output << "Name: " << src.name << "| grade: " << src.grade;
    return (output);
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
    return (this->name);
}

int Bureaucrat::getGrade() const {
    return (this->grade);
}

void    Bureaucrat::increaseGrade() {
    if (this->grade > 1) {
        this->grade--;
    } else {
        throw(GradeTooHighException());
    }
}

void    Bureaucrat::lowerGrade() {
    if (this->grade < 150) {
        this->grade++;
    } else {
        throw(GradeTooLowException());
    }
}

const char*  Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is to High in the sky");
}

const char*  Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is to Low in the hoe");
}