#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public:
        
        AForm(const AForm& src);
        AForm(std::string const name, int const signGrade, int const execGrade);
        AForm&   operator=(const AForm& src);
        ~AForm();

        std::string getName() const;
        int         getSignRequirement() const;
        int         getExecRequirement() const;
        bool        getIsSigned() const;
        void        beSigned(const Bureaucrat& src);

    private:
        AForm();
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

std::ostream& operator<<(std::ostream &output, AForm const& src);

#endif