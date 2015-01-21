

#ifndef __loot__shield__
#define __loot__shield__

#include <stdio.h>
#include <string>
#include "weapon.h"

using namespace std;

class Shield: public Weapon {
friend class loot;
    
public:
    Shield();
    int quality();
    bool getRarity();
    string getName();
    
private:
    bool rare;
    string name;
};

#endif