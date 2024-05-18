#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Memory address of the original string: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Contents of the original string: " << brain << std::endl;
	std::cout << "Value pointed by the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by the stringREF: " << stringREF << std::endl;

	return 0;
}