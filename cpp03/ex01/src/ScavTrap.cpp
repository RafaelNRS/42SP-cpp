#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	Name = "Default ScavTrap";
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;

	std::cout << "Default ScavTrap's constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;

	std::cout << "ScavTrap " << Name << "'s constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& value) : ClapTrap(value)
{
    *this = value;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& value)
{
	ClapTrap::operator=(value);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << "'s destructor called!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode!" << std::endl;
		EnergyPoints -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " has no hit points or energy points left to enter Gate Keeper mode. :/" << std::endl;
	}
}