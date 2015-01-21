
#ifndef __loot__sword__
#define __loot__sword__

#include <stdio.h>
#include <string>
#include "weapon.h"

using namespace std;

class Sword: public Weapon {
friend class loot;
    
public:
    Sword();
    int quality();
    bool getRarity();
    string getName();

private:
    bool rare;
    string name;


};



#endif