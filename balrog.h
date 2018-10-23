/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#ifndef BALROG_H_INCLUDED
#define BALROG_H_INCLUDED

#include "Creature.h"
#include "demon.h"

namespace cs_Creature {

    class balrog: public demon {
        public:
            balrog();
            balrog(int newstrength, int newHitpoints);
            string getSpecies() const;
            int getDamage() const;

    };
}

#endif // BALROG_H_INCLUDED
