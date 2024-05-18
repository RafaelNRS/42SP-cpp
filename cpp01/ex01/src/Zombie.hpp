#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();

		void announce( void );
		void setName(std::string name);
};

/**
 * Allocates N Zombies in a single allocation and initialize them with given name
 */
Zombie* zombieHorde( int N, std::string name );

#endif