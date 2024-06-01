#include "funcs.hpp"

int main( void ) {
    int a = 5;
    int b = 10;

    ::swap(a, b);
    std::cout << "Swaped Numbers: a = " << a << ", b = " << b << std::endl;
    std::cout << "Min = " << ::min( a, b ) << std::endl;
    std::cout << "MAx = " << ::max( a, b ) << std::endl;

    std::string c = "Arthur";
    std::string d = "Marvin";

    ::swap(c, d);
    std::cout << "Swaped Strings: c = " << c << ", d = " << d << std::endl;
    std::cout << "Min = " << ::min( c, d ) << std::endl;
    std::cout << "Max = " << ::max( c, d ) << std::endl;

    return 0;
}