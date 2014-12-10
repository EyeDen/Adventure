
#ifndef __loot__weapon__
#define __loot__weapon__

#include <stdio.h>
#include <string>

using namespace std;

class Weapon{
friend class loot;
    
public:
    Weapon();
    int getAttack();
    int getDefense();
    int getmAttack();
    
private:
    int attack;
    int defense;
    int mAttack;
};

#endif