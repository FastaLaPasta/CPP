#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {
    RobotomyRequestForm     R2D2("R2D2");
    PresidentialPardonForm PLS("please");
    Bureaucrat Jordan("Jordan", 10);
    Jordan.executeForm(PLS);
    Jordan.signForm(R2D2);
    Jordan.executeForm(R2D2);
    Jordan.signForm(PLS);
    Jordan.executeForm(PLS);
    return 0;
}