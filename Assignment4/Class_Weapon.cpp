/*
    Egor Shastin st129457@student.spbu.ru
    In this class the Weapon class is created.
*/

#include "Class_Weapon.h"

Weapon::Weapon() : _patron(0), _is_have(false) {}
Weapon::Weapon(unsigned int patron, bool hav) : _patron(patron), _is_have(hav) {}

// Setters and getters for Weapon
void Weapon::setPatron(unsigned int patron)
{
    _patron = patron;
}

unsigned int Weapon::getPatron() const
{
    return _patron;
}

void Weapon::setIsHave(int hav)
{
    _is_have = hav;
}

bool Weapon::getIsHave() const
{
    return _is_have;
}


