#include <iostream>

// Includes here
#include "Country/Country.h"
#include "ArmyHierarchy/Army.h"
#include "Country/WMD.h"
#include "Country/Nuke.h"
#include "Country/Artillery.h"

int main()
{
    Country *United_States = new Country(10000);
    United_States->setName("United States Of America");
    Country *Germany = new Country(10000);
    Germany->setName("NAZI Scum");
    United_States->Attack(Germany);
    Germany->Retreat();

    WMD* nuke = new Nuke(United_States->getFunds());
    nuke->wmd();

    delete United_States;
    delete Germany;
    delete nuke;
    return 0;
}
