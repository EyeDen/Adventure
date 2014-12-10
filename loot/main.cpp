/**********************************************************************
 Title:             Loot Crate
 Author:            Iden Watanabe
 Purpose:           King's Quest clone
 
 Modification:      12/06/2014 - Finished base class of Weapon.
 
 
 
**********************************************************************/

#include <iostream>
#include <string>
#include "weapon.h"


int main() {
    Weapon myWeap;
    
    cout << "Weapon stats: " << endl;
    cout << "Attack: " << myWeap.getAttack() << endl;
    cout << "Defense: " << myWeap.getDefense() << endl;
    cout << "Enchantment: " << myWeap.getmAttack() << endl;
    cout << endl;
    
    
    return 0;
}
