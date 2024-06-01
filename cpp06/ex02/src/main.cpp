#include "Base.hpp"
#include "identify.hpp"

int main(void)
{
    std::srand(std::time(NULL));
    Base *base = generate();
    std::cout << "Base class pointed: ";
    identify(base);
    std::cout << "Base class referenced: ";
    identify(*base);
    delete base;
    return (0);
}