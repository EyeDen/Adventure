//
//  weapon.cpp
//  loot
//
//  Created by Iden Watanabe on 12/5/14.
//  Copyright (c) 2014 Iden Watanabe. All rights reserved.
//

#include "weapon.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


Weapon::Weapon(){
    int val;
    srand(time(NULL));
    
    val = rand() % 10 + 10; //Should get a random number between 10 & 20
    attack = val;
    
    val = rand() % 5 + 15;
    defense = val;
    
    val = rand() % 5 + 1;
    if (val == 1){
        val = rand() % 5 + 5;
        mAttack = val;
    }
    
    else{
        mAttack = 0;
    }

}


int Weapon::getAttack(){
    return attack;
}

int Weapon::getDefense(){
    return defense;
}

int Weapon::getmAttack(){
    return mAttack;
}