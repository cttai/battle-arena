/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#include "demon.h"

namespace cs_Creature{

    demon::demon()
    {
        Creature::setStrength(10);
        Creature::setHitpoints(10);
    }





    demon::demon(int newStrength, int newHitpoints)
    {
        Creature::setStrength(newStrength);
        Creature::setHitpoints(newHitpoints);
    }






    string demon::getSpecies() const
    {
        return "demon";
    }






    int demon::getDamage() const
    {
        int damage = Creature::getDamage();
        //cout << "attacks for " << damage << " points!" << endl;

        // Demons can inflict damage of 50 with a 25% chance
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

        return damage;
    }

}
