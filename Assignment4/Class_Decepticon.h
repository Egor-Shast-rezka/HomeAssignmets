/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Decepticon, it declares the constructor,
    destructor, and main functions of this class.
*/

#ifndef CLASS_DECEPTICON_H
#define CLASS_DECEPTICON_H

#include "Class_Transformer.h"

// Declare class Decepticon
class Decepticon : public Transformer
{
public:
    Decepticon();
    ~Decepticon() override;

    bool transform() override;

    // Bloodines
    void setBloodiness(bool blood);

    bool getBloodiness() const;

    // Firepower
    void setFirepowerDecepticon(int fire);

    bool getFirepowerDecepticon() const;

    // This if frends operator
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
    friend std::istream& operator>>(std::istream& is, Decepticon& decepticon);

private:
    unsigned int _firepower_decepticon;
    bool _bloodiness;
};

#endif
