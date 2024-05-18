#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& value);
	Cat& operator=(const Cat& value);
	~Cat();

	void makeSound() const;
};

#endif