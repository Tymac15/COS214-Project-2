#include "Soldier.h"
#include<string>
#include "../WeaponHierarchy/Weapon.h"

/**
 * @brief Construct a new Soldier:: Soldier object
 * Instantiating the weapon variable using the factory object
 * @param i - For the ID variable which is made from a rand() function
 */


Soldier::Soldier(int id, int i, string s) : Person(id, i, s){}

Soldier::~Soldier()
{
    if(weapon != NULL)
    {
        delete weapon;
        weapon = NULL;
    }
}

Person *Soldier::clone()
{
    return new Soldier(getID(), getHealth(), getSkill());
}

Person:: addWeapon(Weapon* W)
{
    weapon = W;
}

