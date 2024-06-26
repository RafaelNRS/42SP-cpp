#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog& value) : Animal(value)
{
	if (this == &value)
		return ;
	type = value.type;
	brain = new Brain(*value.brain);
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog	&Dog::operator=(const Dog& value)
{
	if (this == &value)
		return (*this);
	type = value.type;
	brain = new Brain(*value.brain);
	std::cout << "Dog copy assignment operator overload called!" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark! Bark!" << std::endl;
}