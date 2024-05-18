#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

// Derived class
class	WrongCat : public WrongAnimal 
{
	public:
		WrongCat();
		WrongCat(const WrongCat& value);
		WrongCat& operator=(const WrongCat& value);
		~WrongCat();

		void makeSound() const;
};

#endif