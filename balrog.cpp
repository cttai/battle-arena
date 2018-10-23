/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/


#include "balrog.h"

namespace cs_Creature{

    balrog::balrog()
    {
        Creature::setStrength(10);
        Creature::setHitpoints(10);
    }






    balrog::balrog(int newStrength, int newHitpoints)
    {
        Creature::setStrength(newStrength);
        Creature::setHitpoints(newHitpoints);
    }






    string balrog::getSpecies() const
    {
        return "balrog";
    }






    int balrog::getDamage() const
    {
        //cout << "The balrog ";
        int damage = demon::getDamage();

        // Balrogs are so fast they get to attack twice
        int damage2 = (rand() % getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;

        return damage;
    }

}
