/*
    Egor Shastin st129457@student.spbu.ru
    In this class the Ability class is created.
*/

#include <iostream>
#include "Class_Ability.h"

// Constructor Ability
Ability::Ability() : _is_have(true), _power(0) {}

Ability::Ability(bool hav, unsigned int power) : _is_have(hav), _power(power) {}

void Ability::activate(Transformer& transformer)
{
    if (transformer.getFuel() < _power)
    {
        std::cout << "-> Not enough fuel to activate" << std::endl;
        return;
    }
    transformer.setFuel(transformer.getFuel() - _power);
    std::cout << "-> Transformer used your ability " << std::endl << std::endl;
    return;
}

// Setter and getter for Ability
void Ability::setIsHave(bool hav)
{
    _is_have = hav;
}
bool Ability::getIsHave() const
{
    return _is_have;
}

void Ability::setPower(unsigned int power)
{
    _power = power;
}
unsigned int Ability::getPower() const
{
    return _power;
}


















