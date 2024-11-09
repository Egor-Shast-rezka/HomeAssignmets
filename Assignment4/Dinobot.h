/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Dinobot, it declares the constructor, destructor,
    and main functions of this class.
*/

#ifndef DINOBOT_H
#define DINOBOT_H

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

class Autobot;
class Decepticon;

// Declare class Dinobot
class Dinobot : public Transformer
{
public:
    Dinobot();
    Dinobot(unsigned int _firepower_dinobot, bool _still_alive); // Overload constructor
    ~Dinobot() override;

    bool transform() override;

    // Alive
    void setAlive(bool alive);

    bool getAlive() const;

    // Firepower
    void setFirepowerDinobot(int fire);

    bool getFirepowerDinobot() const;

    // This if frends operator
    friend std::ostream& operator<<(std::ostream& os, const Dinobot& dinobot);
    friend std::istream& operator>>(std::istream& is, Dinobot& dinobot);

    // This overload operators
    bool operator>(const Dinobot& other) const;
    bool operator<(const Dinobot& other) const;
    bool operator==(const Dinobot& other) const;

    // This overload operators for oter class
    bool operator>(const Autobot& autobot) const;
    bool operator<(const Autobot& autobot) const;
    bool operator==(const Autobot& autobot) const;

    // This overload operators for other class
    bool operator>(const Decepticon& decepticon) const;
    bool operator<(const Decepticon& decepticon) const;
    bool operator==(const Decepticon& decepticon) const;

private:
    unsigned int _firepower_dinobot;
    bool _still_alive;
};

#endif
