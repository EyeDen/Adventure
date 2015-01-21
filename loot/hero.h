

#ifndef __loot__hero__
#define __loot__hero__

#include <stdio.h>
#include <string>
#include "weapon.h"
#include "sword.h"
#include "shield.h"

class Hero{
friend class Sword;
friend class Shield;
friend class Loot;
    
public:
    Hero(ostream&, istream&);
    void setSword(Sword);
    void setShield(Shield);
    bool levelUp(int);
    
    
    
private:
    void prologue(ostream&, istream&);
    
    Sword currSword;
    Shield currShield;
    int attBonus;
    int defBonus;
    int mAttBonus;
    int mDefBonus;
    
    int health;
    int experience;
    int attack;
    int intelligence;
    int dexterity;
    int defense;
    
    int level;
    int hClass;
    char gender;
    string name;

};

#endif