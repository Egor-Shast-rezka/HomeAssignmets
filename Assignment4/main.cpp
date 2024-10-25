/*
    Egor Shastin st129457@student.spbu.ru
    This code allows you to interact with all folders, unites them.
    Here you can try all the functions of the robots and set the type of robot (Autobot/Decepticon/Dinobot)
*/

#include <iostream>
#include <string> // only for getting data from user, not used in general code
#include "Class_Transformer.h"
#include "Class_Autobot.h"
#include "Class_Dinobot.h"
#include "Class_Decepticon.h"
#include "Class_Weapon.h"

//Main function
int main()
{
    // Create first Transformer and create your strong
    Autobot autobot;
    std::cin >> autobot;
    std::cout << autobot << std::endl << "\n";

    // Create second Transformer and create your strong
    Decepticon decepticon;
    std::cin >> decepticon;
    std::cout << decepticon << std::endl << "\n";

    // Realization function comparison two Transformers
    if (decepticon.getFirepowerDecepticon() > autobot.getFirepowerAutobot())
    {
        std::cout << "Decepticon win\n\n";
    }
    else if (decepticon.getFirepowerDecepticon() < autobot.getFirepowerAutobot())
    {
        std::cout << "Autobot win\n\n";
    }
    else
    {
        std::cout << "Transformer equal\n\n";
    }

    return 0;
}



















