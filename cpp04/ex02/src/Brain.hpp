#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &value);
	Brain &operator=(const Brain &value);
	~Brain();

	std::string* getIdeas();
};

#endif