/*
    Egor Shastin st129457@student.spbu.ru
    This header file contains the declaration of the Transformer and Weapon classes
    and the anum class Direction.
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Weapon.h"

// Class for indicate direction
enum class Direction { Left, Right, Up, Down};

// General class Transformer
class Transformer
{
public:
    Transformer();
    Transformer(unsigned int _ammo, unsigned int _level, unsigned int _strength, unsigned int _fuel, Weapon _weapon);
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

    // This overload operators
    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;
    bool operator==(const Transformer& other) const;

protected:
    unsigned int _ammo;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
    Weapon _weapon;  //Composition class Weapon
};

#endif




















