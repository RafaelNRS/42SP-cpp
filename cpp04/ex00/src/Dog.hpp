#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& value);
	Dog& operator=(const Dog& value);
	~Dog();

	void makeSound() const;
};

#endif