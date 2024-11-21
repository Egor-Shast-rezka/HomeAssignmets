/*
    Egor Shastin st129457@student.spbu.ru
    This code contains the constructor and destructor for the inherited Autobot class,
    as well as the function transform.
*/

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

// Constructor Autobot
Autobot::Autobot() : Transformer(), _firepower_autobot(100), _helping(true)
{
    std::cout << "-> Autobot created" << std::endl;
}

Autobot::Autobot(unsigned int firepower, bool helping)
    : Transformer(), _firepower_autobot(firepower), _helping(helping) {}

// Deconstructor Autobot
Autobot::~Autobot()
{
    std::cout << "-> Autobot destroued" << std::endl;
}

// Transforming for Autobot
bool Autobot::transform()
{
    if (_level < 10)
    {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Autobot transforming in a Car." << std::endl << std::endl;
    return true;
}

// Setters and getters for autobot
void Autobot::setHelping(bool help)
{
    _helping = help;
}

bool Autobot::getHelping() const
{
    return _helping;
}

void Autobot::setFirepowerAutobot(int fire)
{
    _firepower_autobot = fire;
}

unsigned int Autobot::getFirepowerAutobot() const
{
    return _firepower_autobot;
}

// Overload operator << and >>
std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
    os << "Autobot. Firepower: " << autobot._firepower_autobot << ", helping: " << (autobot._helping ? "Yes" : "No");
    return os;
}

std::istream& operator>>(std::istream& is, Autobot& autobot)
{
    std::cout << "Enter firepower: ";
    is >> autobot._firepower_autobot;
    std::cout << "Is Autobot helping? (1 for Yes, 0 for No): ";
    is >> autobot._helping;
    return is;
}

// Overload operator <, > and ==
bool Autobot::operator>(const Autobot& other) const
{
    return _firepower_autobot > other._firepower_autobot;
}

bool Autobot::operator<(const Autobot& other) const
{
    return _firepower_autobot < other._firepower_autobot;
}

bool Autobot::operator==(const Autobot& other) const
{
    return _firepower_autobot == other._firepower_autobot;
}

// Overload operator <, > and == for Decepticon
bool Autobot::operator>(const Decepticon& decepticon) const
{
    return _firepower_autobot > decepticon.getFirepowerDecepticon();
}

bool Autobot::operator<(const Decepticon& decepticon) const
{
    return _firepower_autobot < decepticon.getFirepowerDecepticon();
}

bool Autobot::operator==(const Decepticon& decepticon) const
{
    return _firepower_autobot == decepticon.getFirepowerDecepticon();
}

// Overload operator <, > and == for Dinobot
bool Autobot::operator>(const Dinobot& dinobot) const
{
    return _firepower_autobot > dinobot.getFirepowerDinobot();
}

bool Autobot::operator<(const Dinobot& dinobot) const
{
    return _firepower_autobot < dinobot.getFirepowerDinobot();
}

bool Autobot::operator==(const Dinobot& dinobot) const
{
    return _firepower_autobot == dinobot.getFirepowerDinobot();
}



















