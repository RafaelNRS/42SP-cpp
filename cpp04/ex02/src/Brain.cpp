#include "Brain.hpp"

Brain::Brain()
{
	std::stringstream ss;
	for (size_t i = 0; i < 100; i++)
	{
		ss << i + 1;
		ideas[i] = "Idea " + ss.str();
		ss.str("");
	}
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain &value)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	*this = value;
}

Brain& Brain::operator=(const Brain &value)
{
	std::cout << "Brain copy assignment operator overload called!" << std::endl;
	if (this != &value)
		for (size_t i = 0; i < 100; i++)
		{
			ideas[i] = value.ideas[i];
		}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

std::string* Brain::getIdeas()
{
	return &ideas[0];
}