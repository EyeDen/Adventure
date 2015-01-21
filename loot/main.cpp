/**********************************************************************
 Title:             Loot Crate
 Author:            Iden Watanabe
 Purpose:           King's Quest clone
 
 Modification:      12/06/2014 - Finished base class of Weapon.
                    12/27/2014 - Added Sword class
                    01/05/2015 - Moved quality and rarity from Sword and Shield
                                 over to the base class, Weapon.  Doing so has
                                 pointed out to me that rarity/quailty will
                                 always be the same for both objects.
 
                                 Also, added open function to Loot class and
                                 implemented it in the main.
 
                    01/13/2015 — Added Hero class.  Basic framework for the
                                 three standard archetypes.  Wizard class
                                 might be broken.  Will need more testing.
 
                                 Within the Hero constructor function, prologue,
                                 the input checks are not working.  Must fix!
 
 
 
**********************************************************************/

#include <iostream>
#include <string>
#include "weapon.h"
#include "sword.h"
#include "shield.h"
#include "loot.h"
#include "hero.h"

using namespace std;


int main() {
    char ans;
    Loot lootCrate;
    Hero myHero(cout, cin);
    
    cout << "You found a magic, bottomless loot crate!" << endl;
    cout << "Each time you open it, you will find a new item!" << endl;
    cout << "Would you like to open it? (Y/N)" << endl;
    cout << endl;
    
    cin >> ans;
    cout << endl;
    while(ans != 'N'){
        lootCrate.open(cout);
        cout << endl;
        
        cout << "Would you like to open it again? (Y/N)" << endl;
        cout << endl;
        cin >> ans;
        cout << endl;
    }
    
    cout << "The Mysterious Loot Crate vanishes in a puff of smoke!" << endl;
    
    
    return 0;
}
