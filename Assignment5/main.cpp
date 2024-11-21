/*
    Egor Shastin st129457@student.spbu.ru
    This code allows you to interact with all folders, unites them.
    Here you can try all the functions of the robots and set the type of robot (Autobot/Decepticon/Dinobot)
*/

#include <iostream>
#include <string> // Only for getting data from user, not used in general code
#include "Transformer.h"
#include "Autobot.h"
#include "Dinobot.h"
#include "Decepticon.h"
#include "Weapon.h"
#include <vector> // Only for Assignment5

//Main function
int main()
{
    // All task for Autobot
    Autobot autobot;
    autobot.fire();
    autobot.ultimate();
    autobot.transform();
    
    Transformer* newTransformer = &autobot;
    newTransformer->fire();
    newTransformer->ultimate();
    newTransformer->transform();
    
    // These lines are comical because they repeat Autobot, this is done to shorten the output
    /*
    // All task for Decepticon
    Decepticon decepticon;
    decepticon.fire();
    decepticon.ultimate();
    decepticon.transform();
    
    Transformer* newTransformer_2 = &decepticon;
    newTransformer_2->fire();
    newTransformer_2->ultimate();
    newTransformer_2->transform();
    
    // All task for Dinobot
    Dinobot dinobot;
    dinobot.fire();
    dinobot.ultimate();
    dinobot.transform();
    
    Transformer* newTransformer_3 = &dinobot;
    newTransformer_3->fire();
    newTransformer_3->ultimate();
    newTransformer_3->transform();
    */
    
    Autobot aut1, aut2, aut3;
    Decepticon dec1, dec2, dec3;
    Dinobot din1, din2, din3;

    std::vector<Transformer*> transformers; // Create new vector

    transformers = {&dec1, &dec2, &dec3, &aut1, &aut2, &aut3, &din1, &din2, &din3};

    for (Transformer* tr_mer : transformers) {
        tr_mer->transform();
        tr_mer->fire();
        tr_mer->ultimate();
        std::cout << std::endl;
    }

    return 0;
}



















