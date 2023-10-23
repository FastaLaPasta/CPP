#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        
        Form(const Form& src);
        Form(std::string const name, int const signGrade, int const execGrade);
        Form&   operator=(const Form& src);
        ~Form();

        std::string getName() const;
        int         getSignRequirement() const;
        int         getExecRequirement() const;
        bool        getIsSigned() const;
        void        beSigned(const Bureaucrat& src);

    private:
        Form();
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
        std::string const   name;
        bool                isSigned;
        int const           signeRequirement;
        int const           execRequirement;
};

std::ostream& operator<<(std::ostream &output, Form const& src);

#endif