/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/


#include "Elf.h"

namespace cs_Creature {

    Elf::Elf()
    {
        Creature::setStrength(10);
        Creature::setHitpoints(10);
    }






    Elf::Elf(int newStrength, int newHitpoints)
    {
        Creature::setStrength(newStrength);
        Creature::setHitpoints(newHitpoints);
    }






    string Elf::getSpecies() const
    {
        return "Elf";
    }






    int Elf::getDamage() const
    {
        int damage = Creature::getDamage();
        //cout << "The Elf attacks for " << damage << " points!" << endl;

        // Elves inflict double magical damage with a 50% chance
        if((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }

        return damage;
    }

}
