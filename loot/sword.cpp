//
//  sword.cpp
//  loot
//
//  Created by Iden Watanabe on 12/27/14.
//  Copyright (c) 2014 Iden Watanabe. All rights reserved.
//

#include "sword.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

Sword::Sword(){
    const string adj[] = {"Bloodthirsty", "Keen", "Sharp", "Royal"};
    const string qual[] = {"Broken", "Cracked", "Chipped", "Shattered"};
    const string rarity[] = {"Fiery", "Sublime", "Shimmering", "Icy"};
    const string type[] = {"Longsword", "Broadsword", "Katana", "Rapier"};
    
    int val, q;
    srand(time(NULL));
    
    q = weapQual;
    
    if(q == 1){
        attack += 5;
        defense = 0;
        mAttack += 5;
        rare = true;
        
        val = rand() % 4;
        name += rarity[val];
        name += " ";
        val = rand() % 4;
        name += type[val];
        
    }
    
    else if(q == 3){
        attack = 1;
        defense = 0;
        mAttack = 0;
        rare = false;
        
        val = rand() % 4;
        name += qual[val];
        name += " ";
        val = rand() % 4;
        name += type[val];
        }
    
    else{
        defense = 0;
        rare = false;
        
        val = rand() % 4;
        name += adj[val];
        name += " ";
        val = rand() % 4;
        name += type[val];
    }
    
}


bool Sword::getRarity(){
    if(rare){
        return true;
    }
    
    else return false;
}


string Sword::getName(){
    return name;
}


int Sword::quality(){
    int val;
    srand(time(NULL));
    
    val = rand()% 5+1; //1 - 5
    
    if(val == 1){
        return 1;
    }
    
    if(val == 5){
        return 3;
    }
    
    else return 2;
}