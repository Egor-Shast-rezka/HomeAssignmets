/*
    Egor Shastin st129457@student.spbu.ru
    This code allows you to interact with all folders, unites them.
    Here you can try all the functions of the robots and set the type of robot (Autobot/Decepticon/Dinobot)
*/

#include <iostream>
#include <string> // only for getting data from user, not used in general code
#include "Transformer.h"
#include "Autobot.h"
#include "Dinobot.h"
#include "Decepticon.h"
#include "Weapon.h"

//Main function
int main()
{
    // Create first Transformer and create your strong
    Autobot autobot;
    autobot.setAmmo(100);
    autobot.fire();
    autobot.ultimate();
    
    Decepticon decepticon;
    decepticon.setAmmo(100);
    decepticon.fire();
    decepticon.ultimate();
    
    Dinobot dinobot;
    dinobot.setAmmo(100);
    dinobot.fire();
    dinobot.ultimate();
    return 0;
}



















