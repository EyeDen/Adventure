
#ifndef __loot__weapon__
#define __loot__weapon__

#include <stdio.h>

class Weapon{
friend class loot;
    
public:
    Weapon();
    Weapon(int, int, int, int);
    int getAttack();
    int getDefense();
    int getmAttack();
    
protected:
    int attack;
    int defense;
    int mAttack;
    int weapQual;
    int quality();
    bool rare;
};

#endif