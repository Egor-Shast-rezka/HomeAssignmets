/*
    Egor Shastin st129457@student.spbu.ru
    This file contains the code for the main functions of the Transformer class,
    its constructor and destructor.
*/

#include <iostream>
#include "Class_Transformer.h"
#include "Class_Ability.h"

// Class constructor implementation
Transformer::Transformer() : _ammo(5), _level(15), _strength(100), _fuel(20), _weapon(10, true) {}

// Class deconstructor implementation
Transformer::~Transformer() {}

// Function fire implementation
bool Transformer::fire()
{
    if (_weapon.getIsHave() && _weapon.getPatron() > 0)   // Does the Transformer have weapon and patrons?
    {
        _weapon.setPatron(_weapon.getPatron()-1); // Transformer shot
        std::cout << "-> Transformer fire from weapon..." << std::endl << std::endl;
        std::cout << "Ammo after firing: " << _weapon.getPatron() << std::endl << std::endl;
        return true;
    }
    else if (_ammo > 0)     // If Transformer dont have weapon or patrones
    {
        _ammo--; // Transformer shot
        std::cout << "-> Firing..." << std::endl << std::endl;
        std::cout << "Ammo after firing: " << Transformer::getAmmo() << std::endl << std::endl;
        return true;
    }
    else
    {
        std::cout << "-> No ammo!" << std::endl;
        return false;
    }
}

// Ammo ( getter and setter )
void Transformer::setAmmo(unsigned int ammo)
{
    _ammo = ammo;
}

unsigned int Transformer::getAmmo()
{
    return _ammo;
}

// Level ( getter and setter )
void Transformer::setLevel(unsigned int level)
{
    _level = level;
}

unsigned int Transformer::getLevel()
{
    return _level;
}

// Fuel ( getter and setter )
void Transformer::setFuel(unsigned int fuel)
{
    _fuel = fuel;
}

unsigned int Transformer::getFuel()
{
    return _fuel;
}

// Function turn implementation
bool Transformer::turn(Direction dir)
{
    if (_fuel == 0)
    {
        std::cout << "-> fuel is lost" << std::endl << std::endl;
        return false;
    }
    _fuel--; // Turning
    switch (dir)
    {
    case Direction::Left:
        std::cout << "-> Turning left.." << std::endl << std::endl;
        break;
    case Direction::Right:
        std::cout << "-> Turning right.." << std::endl << std::endl;
        break;
    case Direction::Up:
        std::cout << "-> Turning up.." << std::endl << std::endl;
        break;
    case Direction::Down:
        std::cout << "-> Turning down.." << std::endl << std::endl;
        break;
    }
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}

// Mini function for transformer implementation

// Ultimate for Transform ( implementation associative class )
bool Transformer::ultimate()
{
    if (_fuel > 15)
    {
        Ability ultimateAbility(true, 15); // Create Ability
        ultimateAbility.activate(*this);
        std::cout << "-> Ultimate!!!! ..." << std::endl;
        std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    }
    else
    {
        std::cout << "-> Fuel is lost" << std::endl << std::endl;
    }
    return true;
}

// Transformation for Transform
bool Transformer::transform()
{
    if (_level < 10)
    {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Transforming..." << std::endl << std::endl;
    return true;
}

// Moving for Transform
bool Transformer::move()
{
    if (_fuel == 0)
    {
        std::cout << "-> Fuel is lost" << std::endl << std::endl;
        return false;
    }
    _fuel--;
    std::cout << "-> Moving..." << std::endl << std::endl;
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}


























