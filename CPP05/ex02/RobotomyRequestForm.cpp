#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm::AForm(target, 72, 45) {
    this->targetName = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm::AForm(src.getTargetName(), src.getSignRequirement(), src.getExecRequirement()) {
    this->targetName = src.getTargetName();
}


RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& src) {
    this->targetName = src.targetName;
    return (*this);
}

std::string const   RobotomyRequestForm::getTargetName() const {
    return (this->targetName);
}

void    RobotomyRequestForm::executeAction() const {
    std::cout << "Dzzzz-Whirrrrrr-Bop" << std::endl;
    std::srand (time(NULL)); // Initialisation avec la graine spécifiée
    int random = (std::rand() % 2) + 1;

    if (random == 1) {
        std::cout << this->getTargetName() << " has been robotomized" << std::endl;
    } else {
        std::cout << "Robotomization faaaaaaaa... DZZZZ-WHI" << std::endl;
    }
}