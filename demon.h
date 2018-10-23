/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#ifndef DEMON_H_INCLUDED
#define DEMON_H_INCLUDED

#include "Creature.h"
using namespace std;

namespace cs_Creature {

    class demon: public Creature {
        public:
            demon();
            demon(int newstrength, int newHitpoints);
            string getSpecies() const;
            int getDamage() const;

    };

}


#endif // DEMON_H_INCLUDED
