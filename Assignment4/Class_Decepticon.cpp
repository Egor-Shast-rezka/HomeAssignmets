/*
    Egor Shastin st129457@student.spbu.ru
    This code contains the constructor and destructor for the inherited Decepticon class,
    as well as the function transform.
*/

#include <iostream>
#include "Class_Decepticon.h"

// Creation constructor Decepticon
Decepticon::Decepticon() : _firepower_decepticon(100), _bloodiness(true)
{
    std::cout << "-> Decepticon created" << std::endl;
}

// Creation deconstructor Decepticon
Decepticon::~Decepticon()
{
    std::cout << "-> Decepticon destroyed" << std::endl;
}

bool Decepticon::transform()
{
    if (_level < 10)
    {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Decepticon transforming in a Tank." << std::endl << std::endl;
    return true;
}

// Setters and getters for Decepticon
void Decepticon::setBloodiness(bool blood)
{
    _bloodiness = blood;
}

bool Decepticon::getBloodiness() const
{
    return _bloodiness;
}

void Decepticon::setFirepowerDecepticon(int fire)
{
    _firepower_decepticon = fire;
}

bool Decepticon::getFirepowerDecepticon() const
{
    return _firepower_decepticon;
}

// Overload operator
std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon)
{
    os << "Decepticon, firepower: " << decepticon._firepower_decepticon << ", bloodiness: "
       << (decepticon._bloodiness ? "Yes" : "No");
    return os;
}

std::istream& operator>>(std::istream& is, Decepticon& decepticon)
{
    std::cout << "Enter firepower: ";
    is >> decepticon._firepower_decepticon;
    std::cout << "Is Decepticon bloodiness? (1 for Yes, 0 for No): ";
    is >> decepticon._bloodiness;
    return is;
}















