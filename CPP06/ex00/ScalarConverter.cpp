#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <sstream>
#include <limits>

void    ScalarConverter::convert(std::string input) {
    try {
        char conv = ScalarConverter::charConvert(input);
        std::cout << conv << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        int theint = ScalarConverter::intConvert(input);
        std::cout << theint << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        float thefloat = ScalarConverter::floatConvert(input);
        std::cout << thefloat << "f" << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        double thedouble = ScalarConverter::doubleConvert(input);
        std::cout << thedouble << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

char    ScalarConverter::charConvert(const std::string& input) {
    if (!input.empty()) {
        std::istringstream stream(input);
        int asciiValue = 0;

        //verifier si il s'agit d'entier
        if (stream >> asciiValue) {
            // Vérifier si la valeur est dans la plage ASCII (0-127)
            if (asciiValue >= 32 && asciiValue <= 126) {
                // Convertir l'entier en caractère ASCII
                return static_cast<char>(asciiValue);
            }
            throw std::invalid_argument("Non displayable");
        } else if (input.length() < 2) { 
            return (static_cast<char>(input[0]));
        }
    }
    throw std::invalid_argument("impossible");
    return ('\0');
}

int ScalarConverter::intConvert(const std::string& input) {
    double conv = (atof(input.c_str()));

    if (atof(input.c_str()) && conv <= std::numeric_limits<int>::max() && conv >= std::numeric_limits<int>::min()) {
        return (static_cast<int>(conv));
    } else if (input.length() < 2) {
        return (static_cast<int>(input[0]));
    }
    throw std::invalid_argument("impossible");
    return (0);
}

float   ScalarConverter::floatConvert(const std::string& input) {
    float conv = (atof(input.c_str()));

    if (atof(input.c_str())) {
        return (static_cast<float>(conv));
    } else if (input == "nan" || input == "nanf") {
        return (std::numeric_limits<float>::quiet_NaN());
    } else if (input == "-inff" || input == "-inf") {
        return -(std::numeric_limits<float>::infinity());
    } else if (input == "inff" || input == "inf") {
        return (std::numeric_limits<float>::infinity());
    }
    throw std::invalid_argument("impossible");
    return (0);
}

double ScalarConverter::doubleConvert(const std::string& input) {
    long double conv = (atof(input.c_str()));

    if (atof(input.c_str())) {
        return (static_cast<double>(conv));
    } else if (input == "nan" || input == "nanf") {
        return (std::numeric_limits<double>::quiet_NaN());
    } else if (input == "-inf" || input == "-inff") {
        return -(std::numeric_limits<double>::infinity());
    } else if (input == "inf" || input == "inff") {
        return (std::numeric_limits<double>::infinity());
    }
    throw std::invalid_argument("impossible");
    return (0);
}