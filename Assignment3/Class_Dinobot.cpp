/*
    Egor Shastin st129457@student.spbu.ru
    This code contains the constructor and destructor for the inherited Dinobot class, 
    as well as the function transform.
*/

#include <iostream>
#include "Class_Dinobot.h"

// Creation constructor Dinobot 
Dinobot::Dinobot() : _firepower_dinobot(100), _still_alive(true) { 
    std::cout << "-> Dinobot created" << std::endl;
}

// Creation deconstructor Dinobot
Dinobot::~Dinobot() {
    std::cout << "-> Dinobot destroyed" << std::endl;
}

bool Dinobot::transform() {
    if (_level < 10) {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Dinobot transforming in a dinosaur." << std::endl << std::endl;
    return true;
}
