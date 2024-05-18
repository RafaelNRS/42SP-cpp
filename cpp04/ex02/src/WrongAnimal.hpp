#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>


class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& value);
		WrongAnimal& operator=(const WrongAnimal& value);
		~WrongAnimal();

		void makeSound() const; //No virtual
		std::string	getType() const;
};

#endif