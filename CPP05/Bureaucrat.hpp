#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator=(const Bureaucrat& src);
        std::ostream& operator<<(std::ostream &output, Bureaucrat const& src);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void    increaseGrade();
        void    lowerGrade();

    private:
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
        std::string const   name;
        int grade;
};

#endif