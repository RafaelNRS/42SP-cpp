#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	type = "Wrong Animal";
	std::cout << "Wrong animal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& value)
{
	std::cout << "Wrong animal copy constructor called!" << std::endl;
	*this = value;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& value)
{
	std::cout << "Wrong animal copy assignment operator called!" << std::endl;
	if (this != &value)	
		type = value.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor called!" << std::endl;
}

void	WrongAnimal::makeSound() const 
{
	std::cout << "Wrong animal sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}