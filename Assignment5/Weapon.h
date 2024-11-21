/*
    Egor Shastin st129457@student.spbu.ru
    In this class the Weapon class is decared.
*/

#ifndef WEAPON_H
#define WEAPON_H

// // Declare class Weapon for composition
class Weapon
{
public:
    Weapon();
    Weapon(unsigned int patron, bool hav); // Overload constructor

    // Patron
    void setPatron(unsigned int patron);

    unsigned int getPatron() const;

    // Is Have
    void setIsHave(int hav);

    bool getIsHave() const;

private:
    unsigned int _patron;
    bool _is_have;
};

#endif
