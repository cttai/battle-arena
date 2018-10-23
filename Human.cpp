/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#include "Human.h"

namespace cs_Creature {

    Human::Human()
    {
        Creature::setStrength(10);
        Creature::setHitpoints(10);
    }






    Human::Human(int newStrength, int newHitpoints)
    {
        Creature::setStrength(newStrength);
        Creature::setHitpoints(newHitpoints);
    }





    string Human::getSpecies() const
    {
        return "Human";
    }


}
