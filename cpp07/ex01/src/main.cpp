#include "iter.hpp"

int main( void ) {
    int a[] = {1, 2, 3, 4, 5};
    std::string b[] = {"A", "B", "C", "D", "E"};

    std::cout << "Number:" << std::endl;
    ::iter(a, 5, print);
    std::cout << std::endl;
    std::cout << "Strings:" << std::endl;
    ::iter(b, 5, print);
    return (0);
}