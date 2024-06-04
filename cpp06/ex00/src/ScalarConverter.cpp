#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string& literal) {
    return literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'';
}

bool ScalarConverter::isInt(const std::string& literal) {
    char* end;
    std::strtol(literal.c_str(), &end, 10);
    return *end == '\0';
}

bool ScalarConverter::isFloat(const std::string& literal) {
    if (literal == "+inff" || literal == "-inff" || literal == "nanf") {
        return true;
    }
    char* end;
    std::strtof(literal.c_str(), &end);
    return *end == 'f' && literal.find('.') != std::string::npos && *(end + 1) == '\0';
}

bool ScalarConverter::isDouble(const std::string& literal) {
    if (literal == "+inf" || literal == "-inf" || literal == "nan") {
        return true;
    }
    char* end;
    std::strtod(literal.c_str(), &end);
    return *end == '\0';
}

void ScalarConverter::printChar(char c) {
    if (std::isprint(c)) {
        std::cout << "char: '" << c << "'" << std::endl;
    } else {
        std::cout << "char: Non displayable" << std::endl;
    }
}

void ScalarConverter::printInt(int i) {
    std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f) {
    if (std::isnan(f)) {
        std::cout << "float: nanf" << std::endl;
    } else if (std::isinf(f)) {
        std::cout << "float: " << (f > 0 ? "+inff" : "-inff") << std::endl;
    } else {
        std::cout << "float: " << f;
        if (f == static_cast<int>(f)) {
            std::cout << ".0";
        }
        std::cout << "f" << std::endl;
    }
}

void ScalarConverter::printDouble(double d) {
    if (std::isnan(d)) {
        std::cout << "double: nan" << std::endl;
    } else if (std::isinf(d)) {
        std::cout << "double: " << (d > 0 ? "+inf" : "-inf") << std::endl;
    } else {
        std::cout << "double: " << d;
        if (d == static_cast<int>(d)) {
            std::cout << ".0";
        }
        std::cout << std::endl;
    }
}

void ScalarConverter::convert(const std::string& literal) {
    if (isChar(literal)) {
        char c = literal[1];
        int i = static_cast<int>(c);
        float f = static_cast<float>(c);
        double d = static_cast<double>(c);
        
        printChar(c);
        printInt(i);
        printFloat(f);
        printDouble(d);
    } else if (isInt(literal)) {
        int i = std::atoi(literal.c_str());
        char c = static_cast<char>(i);
        float f = static_cast<float>(i);
        double d = static_cast<double>(i);
        
        if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max()) {
            printChar(c);
        } else {
            std::cout << "char: impossible" << std::endl;
        }
        printInt(i);
        printFloat(f);
        printDouble(d);
    } else if (isFloat(literal)) {
        float f = std::strtof(literal.c_str(), NULL);
        int i = static_cast<int>(f);
        char c = static_cast<char>(i);
        double d = static_cast<double>(f);
        
        if (f >= std::numeric_limits<char>::min() && f <= std::numeric_limits<char>::max()) {
            printChar(c);
        } else {
            std::cout << "char: impossible" << std::endl;
        }
        if (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max()) {
            printInt(i);
        } else {
            std::cout << "int: impossible" << std::endl;
        }
        printFloat(f);
        printDouble(d);
    } else if (isDouble(literal)) {
        double d = std::strtod(literal.c_str(), NULL);
        int i = static_cast<int>(d);
        char c = static_cast<char>(i);
        float f = static_cast<float>(d);
        
        if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max()) {
            printChar(c);
        } else {
            std::cout << "char: impossible" << std::endl;
        }
        if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()) {
            printInt(i);
        } else {
            std::cout << "int: impossible" << std::endl;
        }
        printFloat(f);
        printDouble(d);
    } else {
        std::cout << "Invalid literal" << std::endl;
    }
}