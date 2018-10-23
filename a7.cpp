/* Christine Tai
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "demon.h"
#include "balrog.h"
#include "cyberdemon.h"
using namespace std;
using namespace cs_Creature;


int battleArena(Creature &Creature1, Creature& Creature2);


int main()
{
	srand((time(0)));

	Elf e(50, 50);
	balrog b(50, 50);;
	battleArena(e, b);

	Human h(30, 20);
	cyberdemon c(60, 10);;
	battleArena(h, c);

	Elf e2(45, 35);
	cyberdemon c2(25, 50);;
	battleArena(e2, c2);

    Human h2(65, 70);
	balrog b2(50, 50);;
	battleArena(h2, b2);

	Elf e3(35, 40);
	Human h3(25, 50);;
	battleArena(e3, h3);

	balrog b3(60, 60);
	cyberdemon c3(50, 50);;
	battleArena(b3, c3);

}







int battleArena(Creature &Creature1, Creature& Creature2)
{
    int c1hitpoints = Creature1.getHitpoints();
    int c2hitpoints = Creature2.getHitpoints();

    cout << "-------------------------------------------" << endl;
    cout << "Battle: " << Creature1.getSpecies() << " (" << c1hitpoints << "HP) vs "
         << Creature2.getSpecies() << " (" << c2hitpoints << "HP) !" << endl;

    int counter = 1;

    while (c1hitpoints > 0 && c2hitpoints > 0){
        cout << endl << "--- Attack# " << counter << " ---" << endl;
        c1hitpoints -= Creature2.getDamage();
        c2hitpoints -= Creature1.getDamage();
        counter++;
    }

    cout << endl << "~~ Battle Over! ~~" << endl;
    cout << Creature1.getSpecies() << " has " << c1hitpoints << " hitpoints left!" << endl;
    cout << Creature2.getSpecies() << " has " << c2hitpoints << " hitpoints left!" << endl << endl;


    if (c1hitpoints <= 0 && c2hitpoints <= 0)
        cout << "The battle is a tie!" << endl << endl << endl;

    else if (c1hitpoints > 0 && c2hitpoints < 0)
        cout << "The battle is won by " << Creature1.getSpecies() << "!" << endl << endl << endl;

    else if (c1hitpoints < 0 && c2hitpoints > 0)
        cout << "The battle is won by " << Creature2.getSpecies() << "!" << endl << endl << endl;
}







/* example output:

-------------------------------------------
Battle: Elf (50HP) vs balrog (50HP) !

--- Attack# 1 ---
The balrog attacks for 13 points!
Balrog speed attack inflicts 17 additional damage points!
The Elf attacks for 22 points!
Magical attack inflicts 22 additional damage points!

--- Attack# 2 ---
The balrog attacks for 26 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 27 additional damage points!
The Elf attacks for 42 points!

~~ Battle Over! ~~
Elf has -83 hitpoints left!
balrog has -36 hitpoints left!

The battle is a tie!


-------------------------------------------
Battle: Human (20HP) vs cyberdemon (10HP) !

--- Attack# 1 ---
The cyberdemon attacks for 40 points!
The Human attacks for 29 points!

~~ Battle Over! ~~
Human has -20 hitpoints left!
cyberdemon has -19 hitpoints left!

The battle is a tie!


-------------------------------------------
Battle: Elf (35HP) vs cyberdemon (50HP) !

--- Attack# 1 ---
The cyberdemon attacks for 2 points!
Demonic attack inflicts 50 additional damage points!
The Elf attacks for 35 points!

~~ Battle Over! ~~
Elf has -17 hitpoints left!
cyberdemon has 15 hitpoints left!

The battle is won by cyberdemon!


-------------------------------------------
Battle: Human (70HP) vs balrog (50HP) !

--- Attack# 1 ---
The balrog attacks for 22 points!
Balrog speed attack inflicts 44 additional damage points!
The Human attacks for 42 points!

--- Attack# 2 ---
The balrog attacks for 24 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 30 additional damage points!
The Human attacks for 37 points!

~~ Battle Over! ~~
Human has -100 hitpoints left!
balrog has -29 hitpoints left!

The battle is a tie!


-------------------------------------------
Battle: Elf (40HP) vs Human (50HP) !

--- Attack# 1 ---
The Human attacks for 11 points!
The Elf attacks for 8 points!
Magical attack inflicts 8 additional damage points!

--- Attack# 2 ---
The Human attacks for 2 points!
The Elf attacks for 33 points!
Magical attack inflicts 33 additional damage points!

~~ Battle Over! ~~
Elf has 27 hitpoints left!
Human has -32 hitpoints left!

The battle is won by Elf!


-------------------------------------------
Battle: balrog (60HP) vs cyberdemon (50HP) !

--- Attack# 1 ---
The cyberdemon attacks for 1 points!
The balrog attacks for 6 points!
Balrog speed attack inflicts 43 additional damage points!

--- Attack# 2 ---
The cyberdemon attacks for 6 points!
The balrog attacks for 50 points!
Balrog speed attack inflicts 7 additional damage points!

~~ Battle Over! ~~
balrog has 53 hitpoints left!
cyberdemon has -56 hitpoints left!

The battle is won by balrog!



Process returned 0 (0x0)   execution time : 0.293 s
Press any key to continue.

*/
