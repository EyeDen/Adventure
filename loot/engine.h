
#ifndef __loot__engine__
#define __loot__engine__

#include <stdio.h>
#include "weapon.h"
#include "sword.h"
#include "shield.h"
#include "hero.h"
#include "loot.h"


void move(const string);
void search();
void read(); //Open file & read?
void room(const string); //Read room description?

void encounter(); //Used for battle?
void loadEnemy(); //Reads/spawns enemies?
void fight(); //Actual fight?

void pickup(); //Used with loot?
void loadPuzzle(); //Reads room puzzle?

//Room check?
bool direction;
bool puzzle;
bool item;
bool enemy;

#endif