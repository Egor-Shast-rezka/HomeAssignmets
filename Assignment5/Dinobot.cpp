/*
    Egor Shastin st129457@student.spbu.ru
    This code contains the constructor and destructor for the inherited Dinobot class,
    as well as the function transform.
*/

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

// Creation constructor Dinobot
Dinobot::Dinobot() : _firepower_dinobot(100), _still_alive(true)
{
    std::cout << "-> Dinobot created" << std::endl;
}

Dinobot::Dinobot(unsigned int firepower, bool alive)
    : Transformer(), _firepower_dinobot(firepower), _still_alive(alive) {}

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

// Overload operator <, > and ==
bool Dinobot::operator>(const Dinobot& other) const
{
    return _firepower_dinobot > other._firepower_dinobot;
}

bool Dinobot::operator<(const Dinobot& other) const
{
    return _firepower_dinobot < other._firepower_dinobot;
}

bool Dinobot::operator==(const Dinobot& other) const
{
    return _firepower_dinobot == other._firepower_dinobot;
}

// Overload operator <, > and == for Autobot
bool Dinobot::operator>(const Autobot& autobot) const
{
    return _firepower_dinobot > autobot.getFirepowerAutobot();
}

bool Dinobot::operator<(const Autobot& autobot) const
{
    return _firepower_dinobot < autobot.getFirepowerAutobot();
}

bool Dinobot::operator==(const Autobot& autobot) const
{
    return _firepower_dinobot == autobot.getFirepowerAutobot();
}

// Overload operator <, > and == for Decepticon
bool Dinobot::operator>(const Decepticon& decepticon) const
{
    return _firepower_dinobot > decepticon.getFirepowerDecepticon();
}

bool Dinobot::operator<(const Decepticon& decepticon) const
{
    return _firepower_dinobot < decepticon.getFirepowerDecepticon();
}

bool Dinobot::operator==(const Decepticon& decepticon) const
{
    return _firepower_dinobot == decepticon.getFirepowerDecepticon();
}
















