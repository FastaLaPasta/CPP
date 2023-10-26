#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm::AForm(target, 145, 137) {
    this->targetName = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm::AForm(src.getTargetName(), src.getSignRequirement(), src.getExecRequirement()) {
    this->targetName = src.getTargetName();
}


ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
    this->targetName = src.targetName;
    return (*this);
}

std::string const   ShrubberyCreationForm::getTargetName() const {
    return (this->targetName);
}

void    ShrubberyCreationForm::executeAction() const {
    std::string filname = this->targetName + "_shrubbery";
    std::ofstream outputFile(filname.c_str());
    if (outputFile.is_open()) {
        // Écrire des arbres ASCII dans le fichier
        outputFile << "     /\\      " << std::endl;
        outputFile << "    /  \\     " << std::endl;
        outputFile << "   /    \\    " << std::endl;
        outputFile << "  /______\\   " << std::endl;
        outputFile << "    |  |     " << std::endl;
        outputFile << "    |  |     " << std::endl;

        outputFile.close();
    } else {
        std::cerr << "Failed to open the file" << std::endl;
    }
}