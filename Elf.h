/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#ifndef ELF_H_INCLUDED
#define ELF_H_INCLUDED


#include "Creature.h"

namespace cs_Creature {

    class Elf: public Creature {
        public:
            Elf();
            Elf(int newStrength, int newHitpoints);
            string getSpecies() const;
            int getDamage() const;

    };
}

#endif // ELF_H_INCLUDED
