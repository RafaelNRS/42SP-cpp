#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap& value);
	ScavTrap& operator=(const ScavTrap& value);
	~ScavTrap();

	void guardGate();
};

#endif