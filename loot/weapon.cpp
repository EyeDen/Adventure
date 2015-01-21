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
    
    weapQual= quality();
    
    if(weapQual == 1){
        val = rand() % 3 + 17;
        attack = val;
        
        val = rand() % 3 + 17;
        defense = val;
        
        val = rand() % 5 + 5;
        mAttack = val;
        
        rare = true;
    }
    
    else if(weapQual == 3){
        attack = 1;
        defense = 1;
        mAttack = 0;
        rare = false;
    }
    
    else{
        
        val = rand() % 17 + 3; //Should get a random number between 10 & 20
        attack = val;
        
        val = rand() % 10 + 10;
        defense = val;
        
        val = rand() % 5 + 1;
        if (val == 1){
            val = rand() % 10 + 1;
            mAttack = val;
        }
        
        else{
            mAttack = 0;
        }
        
        rare = false;
    }

}


Weapon::Weapon(int qual, int at, int def, int mat){
    attack = at;
    defense = def;
    mAttack = mat;
    
    if (qual == 1){
        rare = true;
    }
    
    else rare = false;
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


int Weapon::quality(){
    int val;
    srand(time(NULL));
    
    val = rand() % 5+1;
    
    if(val == 1){
        return 1;
    }
    
    if(val == 5){
        return 3;
    }
    
    else return 2;
}