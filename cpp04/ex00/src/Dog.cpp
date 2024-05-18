#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog& value): Animal(value)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = value;
}

Dog	&Dog::operator=(const Dog& value)
{
	std::cout << "Dog copy assignment operator overload called!" << std::endl;
	Animal::operator=(value);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark! Bark!" << std::endl;
}