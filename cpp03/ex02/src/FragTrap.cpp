#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	Name = "Default FragTrap";
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;

	std::cout << "Default FragTrap's constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;

	std::cout << "FragTrap " << Name << "'s constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& value): ClapTrap(value)
{
	*this = value;
}

FragTrap& FragTrap::operator=(const FragTrap& value)
{
	ClapTrap::operator=(value);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << "'s destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "Hey bro! High five me!" << std::endl;
		EnergyPoints -= 1;
	}
	else
	{
		std::cout << "FragTrap " << Name << " has no hit points or energy points left to high five.. :/" << std::endl;
	}
}