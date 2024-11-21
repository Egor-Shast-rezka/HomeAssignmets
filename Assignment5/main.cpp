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
    std::cin >> autobot;
    std::cout << autobot << std::endl << "\n";

    // Create second Transformer and create your strong
    Decepticon decepticon;
    std::cin >> decepticon;
    std::cout << decepticon << std::endl << "\n";

    // Create third Transformer and create your strong
    Dinobot dinobot;
    std::cin >> dinobot;
    std::cout << dinobot << std::endl << "\n";

    // Realization function comparison two Transformers and overload operator
    // Compare decepticon and autobot
    if (decepticon > autobot)
    {
        std::cout << "Decepticon is stronger than Autobot\n\n";
    }
    else if (decepticon < autobot)
    {
        std::cout << "Autobot is stronger than Decepticon\n\n";
    }
    else
    {
        std::cout << "Autobot and Decepticon are equally strong\n\n";
    }

    // Compare decepticon and dinobot
    if (decepticon > dinobot)
    {
        std::cout << "Decepticon is stronger than Dinobot\n\n";
    }
    else if (decepticon < dinobot)
    {
        std::cout << "Dinobot is stronger than Decepticon\n\n";
    }
    else
    {
        std::cout << "Dinobot and Decepticon are equally strong\n\n";
    }

    // Compare dinobot and autobot
    if (dinobot > autobot)
    {
        std::cout << "Dinobot is stronger than Autobot\n\n";
    }
    else if (dinobot < autobot)
    {
        std::cout << "Autobot is stronger than Dinobot\n\n";
    }
    else
    {
        std::cout << "Autobot and Dinobot are equally strong\n\n";
    }

    return 0;
}



















