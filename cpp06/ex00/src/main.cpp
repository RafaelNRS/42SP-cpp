#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Incorrect usage of application!" << std::endl;
        std::cout << "Correct usage: ./ex00 \"<literal>\"" << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}