#include "AAnimal.hpp"


Animal::Animal()
{
	type = "Strange animal";
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal& value)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = value;
}

Animal	&Animal::operator=(const Animal& value)
{
	std::cout << "Animal copy assignment operator overload called!" << std::endl;
	if (this != &value)
		type = value.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "The animal made a strange sound.. o.O" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}