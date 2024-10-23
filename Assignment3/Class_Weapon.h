/*
    Egor Shastin st129457@student.spbu.ru
    In this class the Weapon class is decared.
*/

#ifndef CLASS_WEAPON_H
#define CLASS_WEAPON_H

// // Declare class Weapon for composition
class Weapon {
public:
    Weapon();
    Weapon(unsigned int patron, bool hav);
    
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
