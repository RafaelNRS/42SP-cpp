#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat& value);
	Cat& operator=(const Cat& value);
	virtual ~Cat();

	void makeSound() const;
};

#endif