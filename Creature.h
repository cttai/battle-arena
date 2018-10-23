/* Christine Tai
CS 11
3/13/17
Dave Harden
a7_2
*/

#ifndef CREATURE_H_INCLUDED
#define CREATURE_H_INCLUDED

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

namespace cs_Creature {

    class Creature {
        private:
            int strength;           // how much damage this Creature inflicts
            int hitpoints;          // how much damage this Creature can sustain

        public:
            Creature();
            Creature(int newStrength, int newHitpoints);

            virtual int getDamage() const;         // returns the amount of damage this Creature inflicts in one round of combat
            virtual string getSpecies() const = 0;    // returns the type of the species

            int getStrength() const;
            int getHitpoints() const;

            void setStrength(int newStrength);
            void setHitpoints(int newHitpoints);
    };

}


#endif // CREATURE_H_INCLUDED
