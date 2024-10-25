/*
    Egor Shastin st129457@student.spbu.ru
    This code contains the constructor and destructor for the inherited Dinobot class,
    as well as the function transform.
*/

#include <iostream>
#include "Class_Dinobot.h"

// Creation constructor Dinobot
Dinobot::Dinobot() : _firepower_dinobot(100), _still_alive(true)
{
    std::cout << "-> Dinobot created" << std::endl;
}

// Creation deconstructor Dinobot
Dinobot::~Dinobot()
{
    std::cout << "-> Dinobot destroyed" << std::endl;
}

bool Dinobot::transform()
{
    if (_level < 10)
    {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Dinobot transforming in a dinosaur." << std::endl << std::endl;
    return true;
}

// Setters and getters for Dinobot
void Dinobot::setAlive(bool alive)
{
    _still_alive = alive;
}

bool Dinobot::getAlive() const
{
    return _still_alive;
}

void Dinobot::setFirepowerDinobot(int fire)
{
    _firepower_dinobot = fire;
}

bool Dinobot::getFirepowerDinobot() const
{
    return _firepower_dinobot;
}

// Overload operator
std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot)
{
    os << "Dinobot, firepower: " << dinobot._firepower_dinobot << ", still allive? : "
       << (dinobot._still_alive ? "Yes" : "No");
    return os;
}

std::istream& operator>>(std::istream& is, Dinobot& dinobot)
{
    std::cout << "Enter firepower: ";
    is >> dinobot._firepower_dinobot;
    std::cout << "Is Dinobot still allive? (1 for Yes, 0 for No): ";
    is >> dinobot._still_alive;
    return is;
}















