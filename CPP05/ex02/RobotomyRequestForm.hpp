#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(const RobotomyRequestForm& src);
        RobotomyRequestForm&  operator=(const RobotomyRequestForm& src);
        ~RobotomyRequestForm();
        std::string const   getTargetName() const;
    private:
        void    executeAction() const;
        RobotomyRequestForm();
        std::string   targetName;
};

#endif