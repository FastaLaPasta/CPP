#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {

}

Intern::Intern(const Intern& src) {
    (void) src;
}

Intern& Intern::operator=(const Intern& src) {
    (void)src;
    return (*this);
}

Intern::~Intern() {

}

AForm*  Intern::makeForm(std::string name, std::string target) {
    std::string tab[] = {"robotomy request", "president", "shrubbery"};
    int idx = -1;

    for (size_t i = 0; i < 3; i++) {
        if (name.compare(tab[i]) == 0) {
            idx = i;
            break;
        }
    }
    switch (idx) {
        case 0: 
            std::cout << "I create succefuly an RobotomyRequestForm object"  << std::endl;
            return (new RobotomyRequestForm(target));
        case 1:
        std::cout << "I create succefuly an PresidentialPardonForm object"  << std::endl;
            return (new PresidentialPardonForm(target));
        case 2:
        std::cout << "I create succefuly an ShrubberyCreationForm object"  << std::endl;
            return (new ShrubberyCreationForm(target));
        default:
            std::cout << "wrong object name" << std::endl;
            return (NULL);
    }
}