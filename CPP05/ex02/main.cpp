#include "Bureaucrat.hpp"

int main( void ) {
    try
    {
        Bureaucrat  joe("joe", 149);
        Bureaucrat  bob("bob", 149);
        std::cout << "Name: " << joe.getName() << std::endl;
        std::cout << "Grade: " << joe.getGrade() << std::endl;
        joe.increaseGrade();

        Form formulaire("formulaire", 149, 149);
        joe.signForm(formulaire);

        bob.lowerGrade();
        std::cout << "Bob Grade: " << bob.getGrade() << std::endl;
        Form formulaire_2("formulaire_2", 149, 149);
        bob.signForm(formulaire_2);

        bob.increaseGrade();
        std::cout << formulaire_2 << bob;
        bob.signForm(formulaire);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}