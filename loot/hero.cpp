//
//  hero.cpp
//  loot
//
//  Created by Iden Watanabe on 1/8/15.
//  Copyright (c) 2015 Iden Watanabe. All rights reserved.
//

#include "hero.h"
#include "weapon.h"
#include "sword.h"
#include "shield.h"
#include <iostream>

using namespace std;

Hero::Hero(ostream& out, istream& in){
    
    prologue(out, in);
    
    if (hClass == 1){            //Warrior
        health = 50;
        intelligence = 20;
        attack = 40;
        dexterity = 30;
        defense = 40;
        
        experience = 0;
        level = 1;
    }
    
    else if (hClass == 2){       //Rogue
        health = 40;
        intelligence = 30;
        attack = 30;
        dexterity = 50;
        defense = 40;
        
        experience = 0;
        level = 1;
    }
    
    else{                   //Wizard
        health = 30;
        intelligence = 50;
        attack = 20;
        dexterity = 30;
        defense = 30;
        
        experience = 0;
        level = 1;
    }
}


void Hero::setSword(Sword mySword){
    attBonus = mySword.getAttack();
    mAttBonus = mySword.getmAttack();
}


void Hero::setShield(Shield myShield){
    defBonus = myShield.getDefense();
    mDefBonus = myShield.getmAttack();
}


bool Hero::levelUp(int xp){
    experience += xp;
    
    if (experience % 100 == 0){
        level++;
        
        if(hClass != 3){
            //Warriors & Rogues gain health & attack each level
            
            health += 5;
            attack += 5;
            
            if(hClass == 1){
                //Every even level, Warrior & Rogues gain bonuses
                if(level % 2 == 0) {
                    health += 10;
                    attack += 10;
                    defense += 5;
                    dexterity += 5;
                    intelligence += 5;
                }
            }
            
            if(hClass == 2){
                if(level % 2 == 0){
                    attack += 10;
                    defense += 5;
                    dexterity += 10;
                    intelligence += 5;
                }
            }
        }
        
        else{
            intelligence += 5;
            attack += 5;
            
            //Wizards only gain health on even levels
            //However, wizards also gain a huge intelligence
            //boost on even levels.
            //Possibly broken...
            if(level % 2 == 0){
                health += 5;
                attack += 5;
                defense += 5;
                dexterity += 20;
                intelligence += 5;
            }
        }
        
        return true;
    }
    
    return false;
}


void Hero::prologue(ostream& out, istream& in){
    string gen, cla, temp;
    
    out << "You awaken, face down against the shore.  The harsh tang of salt water fills your mouth.  You look around and see a narrow cove full of large rocks that stand sentry like jagged teeth.  Luck, it seems, is with you." << endl;
    out << endl;
    
    out << "Planks of smashed wood litter the shore.  You remember being on a ship.  Your fine clothes, now soaked and torn, hint at a position of great wealth.  A memory whispers a word to you..." << endl;
    out << endl;
    
    out << "Were you a: " << endl;
    out << "King  [m]" << endl;
    out << "Queen [w]" << endl;
    in >> gender;
    out << endl;
    
    //Input check
    /*if (gender != 'm' || gender != 'w'){
        while(gender!='m' || gender!='w'){
            out << "You strain to hear the faint whisper." << endl;
            out << "Were you a: " << endl;
            out << "King  [m]" << endl;
            out << "Queen [w]" << endl;
            out << "(Please select an option from within the brackets)" << endl;
            in >> gender;
            out << endl;
        }
    }//end check*/
    
    if (gender == 'm'){
        gen = "King";
    }
    
    else gen = "Queen";
    
    out << "Yes, you recall being a " << gen << ".  But what sort of monarch were you?  You strain to recall if you were..." << endl;
    out << "a STRONG ruler  [1]" << endl;
    out << "a CLEVER ruler  [2]" << endl;
    out << "or a WISE ruler [3]" << endl;
    in >> hClass;
    out << endl;
    
    //Input check
    /*if(hClass < 1 || hClass > 3){
        while(hClass < 1 || hClass > 3){
            out << "A strong ache prevents you from focusing.  You try again, stretching past the fog.  Were you..." << endl;
            out << "a STRONG ruler  [1]" << endl;
            out << "a CLEVER ruler  [2]" << endl;
            out << "or a WISE ruler [3]" << endl;
            out << "(Please select an option from within the brackets)" << endl;
            in >> hClass;
            out << endl;
        }
    }//end check*/
    
    if (hClass == 1){
        cla = "STRONG";
    }
    
    else if (hClass == 2){
        cla = "CLEVER";
    }
    
    else cla = "WISE";
    
    out << "Yes, that feels right.  You were a " << cla << " " << gen << ".  Now, if you could only recall your name..." << endl;
    
    out << endl;
    out << "What was your name?" << endl;
    in >> temp;
    if (temp.size() < 13){
        name = temp;
    }
    
    else{
        for(int i = 0; i < 13; i++){
            name += temp[i];
        }
    }
    out << endl;
    
    out << gen << " " << name << ".  The sound of it fills you with certainty.  That is who you were, but what are you doing here?  A narrow cave stands behind you.  It is your only shelter.  The cove is too rough to swim against, and the low, dark clouds on the horizon promise a powerful storm.  To learn of your past, you have no choice but to enter." << endl;
    out << endl;
}