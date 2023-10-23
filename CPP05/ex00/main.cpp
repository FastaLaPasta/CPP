#include "Bureaucrat.hpp"

int main( void ) {
    try
    {
        Bureaucrat  joe("joe", 150);
        Bureaucrat  bob(joe);
        std::cout << "Name: " << joe.getName() << std::endl;
        std::cout << "Grade: " << joe.getGrade() << std::endl;
        std::cout << "Bob Name: " << bob.getName() << std::endl;
        std::cout << "Bob Grade: " << bob.getGrade() << std::endl;
        joe.increaseGrade();
        std::cout << "Grade: " << joe.getGrade() << std::endl;
        std::cout << "Bob Grade: " << bob.getGrade() << std::endl;
        joe.lowerGrade();
        joe.lowerGrade();

    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}