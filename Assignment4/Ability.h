/*
    Egor Shastin st129457@student.spbu.ru
    In this class the Ability class is decared.
*/

#ifndef ABILITY_H
#define ABILITY_H

#include "Transformer.h"

// Declare class Ability
class Ability
{
public:
    Ability();
    Ability(bool hav, unsigned int power); // Overload constructor

    void activate(Transformer& transformer);

    // Is have
    void setIsHave(bool hav);

    bool getIsHave() const;

    // Power
    void setPower(unsigned int power);

    unsigned int getPower() const;

private:
    bool _is_have;
    unsigned int _power;
};

#endif
