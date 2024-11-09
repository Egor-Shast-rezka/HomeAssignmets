/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Autobot, it declares the constructor,
    destructor, and main functions of this class.
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

class Decepticon;
class Dinobot;

// Declare class Autobot
class Autobot : public Transformer
{
public:
    Autobot();
    Autobot(unsigned int _firepower_autobot, bool _helping); // Overload constructor
    ~Autobot() override;

    bool transform() override;

    // Helping
    void setHelping(bool help);

    bool getHelping() const;

    // Firepower
    void setFirepowerAutobot(int fire);

    unsigned int getFirepowerAutobot() const;

    // This if frends operator
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
    friend std::istream& operator>>(std::istream& is, Autobot& autobot);

    // This overload operators
    bool operator>(const Autobot& other) const;
    bool operator<(const Autobot& other) const;
    bool operator==(const Autobot& other) const;

    // This overload operators for other class
    bool operator>(const Decepticon& decepticon) const;
    bool operator<(const Decepticon& decepticon) const;
    bool operator==(const Decepticon& decepticon) const;

    // This overload operators for other class
    bool operator>(const Dinobot& dinobot) const;
    bool operator<(const Dinobot& dinobot) const;
    bool operator==(const Dinobot& dinobot) const;

private:
    unsigned int _firepower_autobot;
    bool _helping;
};

#endif
