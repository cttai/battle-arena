/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#ifndef CYBERDEMON_H_INCLUDED
#define CYBERDEMON_H_INCLUDED

#include "Creature.h"
#include "demon.h"

namespace cs_Creature {

    class cyberdemon: public demon {
        public:
            cyberdemon();
            cyberdemon(int newstrength, int newHitpoints);
            string getSpecies() const;

    };
}

#endif // CYBERDEMON_H_INCLUDED
