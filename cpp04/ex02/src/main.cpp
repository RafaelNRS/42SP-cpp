#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* animals[4];

	for (size_t i = 0; i < 2; i++)
	{
		animals[i] = new Cat();
	}
	for (size_t i = 2; i < 4; i++)
	{
		animals[i] = new Dog();
	}

	std::cout << "-------------------------------------------" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "-------------------------------------------" << std::endl;

	for (size_t i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	return 0;
}