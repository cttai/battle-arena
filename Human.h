/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED

#include "Creature.h"

namespace cs_Creature {

    class Human: public Creature {
        public:
            Human();
            Human(int newstrength, int newHitpoints);
            string getSpecies() const;
    };
}

#endif // HUMAN_H_INCLUDED
