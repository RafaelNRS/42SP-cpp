#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("Default ClapTrap")
{
	std::cout << "Default ClapTrap's constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << Name << "'s constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& value)
{
	*this = value;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& value)
{
	Name = value.Name;
	HitPoints = value.HitPoints;
	EnergyPoints = value.EnergyPoints;
	AttackDamage = value.AttackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << "'s destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints -= 1;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " has no HitPoints or EnergyPoints left to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > 0)
	{
		HitPoints -= amount;
		std::cout << "ClapTrap " << Name << " took " << amount << " points of damage!" << std::endl;
		if (HitPoints < 0)
		{
			HitPoints = 0;
			std::cout << "ClapTrap " << Name << " died!" << std::endl;
		}

	}
	else
	{
		std::cout << "Stop it! ClapTrap " << Name << " is already dead!!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints > 0 && EnergyPoints > 0)
	{
		HitPoints += amount;
		EnergyPoints -= 1;
		if (HitPoints > 10)
		{
			HitPoints = 10;
			std::cout << "ClapTrap " << Name << " fully repaired itself!" << std::endl;
		}
		else
			std::cout << "ClapTrap " << Name << " repaired itself by " << amount << " points! >:D" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " has no hit points or energy points left to heal itself." << std::endl;
	}
}