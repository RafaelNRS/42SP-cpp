#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog& value);
	Dog& operator=(const Dog& value);
	~Dog();

	void makeSound() const;
};

#endif