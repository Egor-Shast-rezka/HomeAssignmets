/*
    Egor Shastin st129457@student.spbu.ru
    This header file contains the declaration of the Transformer and Weapon classes
    and the anum class Direction.
*/

#ifndef CLASS_TRANSFORMER_H
#define CLASS_TRANSFORMER_H

#include "Class_Weapon.h"

// Class for indicate direction
enum class Direction { Left, Right, Up, Down};

// General class Transformer
class Transformer
{
public:
    Transformer();
    virtual ~Transformer();

    virtual bool move();
    virtual bool turn(Direction dir);
    virtual bool fire();
    virtual bool ultimate();
    virtual bool transform();

    // Ammo
    void setAmmo(unsigned int ammo);

    unsigned int getAmmo();

    // Level
    void setLevel(unsigned int level);

    unsigned int getLevel();

    // Fuel
    void setFuel(unsigned int fuel);

    unsigned int getFuel();

    // This if frends operator
    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);
    friend std::istream& operator>>(std::istream& is, Transformer& transformer);

protected:
    unsigned int _ammo;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
    Weapon _weapon;  //Composition class Weapon
};

#endif




















