#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>

class ScalarConverter {
    public:
        static char        charConvert(const std::string& input);
        static int         intConvert(const std::string& input);
        static float       floatConvert(const std::string& input);
        static double      doubleConvert(const std::string& input);
        static void         convert(std::string input);
    private:
        ScalarConverter();
};

#endif