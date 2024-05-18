#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);

    ~Zombie();

    void announce();
};

/**
 * Creates a new Zombie on the heap and returns a pointer to it.
 */
Zombie* newZombie(std::string name);

/**
 * Creates a Zombie on the stack and makes it announce itself.
 */
void randomChump(std::string name);

#endif
