/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#include "cyberdemon.h"

namespace cs_Creature {

    cyberdemon::cyberdemon()
    {
        Creature::setStrength(10);
        Creature::setHitpoints(10);
    }





    cyberdemon::cyberdemon(int newStrength, int newHitpoints)
    {
        Creature::setStrength(newStrength);
        Creature::setHitpoints(newHitpoints);
    }






    string cyberdemon::getSpecies() const
    {
        return "cyberdemon";
    }

}
