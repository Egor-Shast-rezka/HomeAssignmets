/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Decepticon, it declares the constructor,
    destructor, and main functions of this class.
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

class Autobot;
class Dinobot;

// Declare class Decepticon
class Decepticon : public Transformer
{
public:
    Decepticon();
    Decepticon(unsigned int _firepower_decepticon, bool _bloodiness); // Overload constructor
    ~Decepticon() override;

    bool transform() override;

    // Bloodines
    void setBloodiness(bool blood);

    bool getBloodiness() const;

    // Firepower
    void setFirepowerDecepticon(int fire);

    unsigned int getFirepowerDecepticon() const;

    // This if frends operator
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
    friend std::istream& operator>>(std::istream& is, Decepticon& decepticon);

    // This overload operators
    bool operator>(const Decepticon& other) const;
    bool operator<(const Decepticon& other) const;
    bool operator==(const Decepticon& other) const;

    // This overload operators for oter class
    bool operator>(const Autobot& autobot) const;
    bool operator<(const Autobot& autobot) const;
    bool operator==(const Autobot& autobot) const;

    // This overload operators for oter class
    bool operator>(const Dinobot& dinobot) const;
    bool operator<(const Dinobot& dinobot) const;
    bool operator==(const Dinobot& dinobot) const;

private:
    unsigned int _firepower_decepticon;
    bool _bloodiness;
};

#endif
