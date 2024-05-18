#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon weapon("Buster Sword");
        HumanA bob("Bob", weapon);
        bob.attack();
        weapon.setType("some other type of sword");
        bob.attack();
    }

    {
        Weapon club("Golden Hammer");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of hammer");
        jim.attack();
    }

    return 0;
}