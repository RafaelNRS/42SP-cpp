#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clappy("Clappy");

	clappy.attack("Johnny");

	clappy.takeDamage(7);
	clappy.beRepaired(2);
	clappy.beRepaired(15);

	for (int i = 0; i < 8; i++)
		clappy.attack("Johnny");

	clappy.takeDamage(7);
	clappy.takeDamage(7);
	clappy.beRepaired(15);

	clappy.takeDamage(7);

	return 0;
}