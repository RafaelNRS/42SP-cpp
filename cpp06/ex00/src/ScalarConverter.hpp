#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <cctype>

class ScalarConverter {
public:
    static void convert(const std::string& literal);

private:
    ScalarConverter() {}
    ~ScalarConverter() {}
    
    static bool isChar(const std::string& literal);
    static bool isInt(const std::string& literal);
    static bool isFloat(const std::string& literal);
    static bool isDouble(const std::string& literal);
    
    static void printChar(char c);
    static void printInt(int i);
    static void printFloat(float f);
    static void printDouble(double d);
};

#endif