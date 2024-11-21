/*
    Egor Shastin st129457@student.spbu.ru
    This code contains the constructor and destructor for the inherited Dinobot class,
    as well as the function transform.
*/

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
#include "Ability.h"

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
    std::cout << "~Method: transform; Class: Dinobot~" << std::endl << std::endl;
    if (_level < 10)
    {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Dinobot transforming in a dinosaur." << std::endl << std::endl;
    return true;
}

// Function fire implementation for Dinobot
bool Dinobot::fire()
{
    std::cout << "~Method: fire; Class: Dinobot~" << std::endl << std::endl;
    if (_weapon.getIsHave() && _weapon.getPatron() > 0)   // Does the Dinobot have weapon and patrons?
    {
        _weapon.setPatron(_weapon.getPatron()-1); // Dinobot shot
        std::cout << "-> Dinobot fire from weapon..." << std::endl << std::endl;
        std::cout << "Ammo after firing: " << _weapon.getPatron() << std::endl << std::endl;
        return true;
    }
    else if (_ammo > 0)     // If Dinobot dont have weapon or patrones
    {
        _ammo--; // Dinobot shot
        std::cout << "-> Dinobot firing..." << std::endl << std::endl;
        std::cout << "Ammo after firing: " << Dinobot::getAmmo() << std::endl << std::endl;
        return true;
    }
    else
    {
        std::cout << "-> No ammo!" << std::endl;
        return false;
    }
}

// Ultimate for Dinobot
bool Dinobot::ultimate()
{
    std::cout << "~Method: ultimate; Class: Dinobot~" << std::endl << std::endl;
    if (_fuel > 15)
    {
        Ability ultimateAbility(true, 15); // Create Ability
        ultimateAbility.activate(*this);
        std::cout << "-> Dinobot ultimate!!!! ..." << std::endl;
        std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    }
    else
    {
        std::cout << "-> Fuel on Dinobot is lost" << std::endl << std::endl;
    }
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
















