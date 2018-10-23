/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/


#include "Creature.h"


namespace cs_Creature{

    Creature::Creature()
    {
        strength = 10;
        hitpoints = 10;
    }





    Creature::Creature(int newStrength, int newHitpoints)
    {
        strength = newStrength;
        hitpoints = newHitpoints;
    }






    string Creature::getSpecies() const
    {

    }






    int Creature::getDamage() const
    {
        int damage;
        damage = (rand() % strength) + 1;
        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        return damage;
    }






    int Creature::getStrength() const
    {
        return strength;
    }







    int Creature::getHitpoints() const
    {
        return hitpoints;
    }






    void Creature::setStrength(int newStrength)
    {
        strength = newStrength;
    }






    void Creature::setHitpoints(int newHitpoints)
    {
        hitpoints = newHitpoints;
    }


}

