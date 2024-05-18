#include "Cat.hpp"


Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat& value): Animal(value)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = value;
}

Cat	&Cat::operator=(const Cat& value)
{
	std::cout << "Cat copy assignment operator overload called!" << std::endl;
	Animal::operator=(value);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}