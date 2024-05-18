#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << this->name << " was shot in the head!" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce ( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}