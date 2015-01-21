//
//  shield.cpp
//  loot
//
//  Created by Iden Watanabe on 1/2/15.
//  Copyright (c) 2015 Iden Watanabe. All rights reserved.
//

#include "shield.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

Shield::Shield(){
    const string adj[] = {"Sturdy", "Spiked", "Steel", "Heavy"};
    const string qual[] = {"Broken", "Dented", "Warped", "Soggy"};
    const string rarity[] = {"Diamondine", "Adamantine", "Electric", "Mythril"};
    const string type[] = {"Aegis", "Tower Shield", "Bulwark", "Kite Shield"};
    
    int val, q;
    srand(time(NULL));
    
    q = quality();
    
    if(q == 1){
        attack = 0;
        defense += 5;
        mAttack += 5;
        rare = true;
        
        val = rand() % 4;
        name += rarity[val];
        name += " ";
        val = rand() % 4;
        name += type[val];
    }
    
    else if(q == 3){
        attack = 0;
        defense = 1;
        mAttack = 0;
        rare = false;
        
        val = rand() % 4;
        name += qual[val];
        name += " ";
        val = rand() % 4;
        name += type[val];
    }
    
    else{
        attack = 0;
        rare = false;
        
        val = rand() % 4;
        name += adj[val];
        name += " ";
        val = rand() % 4;
        name += type[val];
    }
    
    
    
    
}


bool Shield::getRarity(){
    if(rare){
        return true;
    }
    
    else return false;
}


string Shield::getName(){
    return name;
}


int Shield::quality(){
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