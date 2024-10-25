/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Dinobot, it declares the constructor, destructor,
    and main functions of this class.
*/

#ifndef CLASS_DINOBOT_H
#define CLASS_DINOBOT_H

#include "Class_Transformer.h"

// Declare class Dinobot
class Dinobot : public Transformer
{
public:
    Dinobot();
    ~Dinobot() override;

    bool transform() override;

    // Alive
    void setAlive(bool alive);

    bool getAlive() const;

    // Firepower
    void setFirepowerDinobot(int fire);

    bool getFirepowerDinobot() const;

private:
    unsigned int _firepower_dinobot;
    bool _still_alive;
};

#endif
