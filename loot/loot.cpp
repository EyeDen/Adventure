#include "loot.h"
#include "weapon.h"
#include "sword.h"
#include "shield.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Loot::open(ostream& out){
    int val;
    srand(time(NULL));
    
    val = rand() % 10 + 1;
    
    if(val < 6){
        Sword mySword;
        
        if(mySword.getRarity()){
            out << "RARE!" << endl;
        }
        out << "Name: " << mySword.getName() << endl;
        out << "Weapon Stats: " << endl;
        out << mySword.getAttack() << " attack + " <<
        mySword.getmAttack() << " magic bonus" << endl;
    }
    
    else{
        Shield myShield;
        
        if(myShield.getRarity()){
            out << "RARE!" << endl;
        }
        out << "Name: " << myShield.getName() << endl;
        out << "Weapon Stats: " << endl;
        out << myShield.getDefense() << " defense + " <<
        myShield.getmAttack() << " magic bonus" << endl;
    }
    
}