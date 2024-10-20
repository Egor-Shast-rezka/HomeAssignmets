/*
    Egor Shastin st129457@student.spbu.ru
*/

#ifndef CLASS_DINOBOT_H
#define CLASS_DINOBOT_H

#include "Class_Transformer.h"

// class Dinobot
class Dinobot : public Transformer {
public:
    Dinobot();
    ~Dinobot() override;
    
    bool transform() override;
    
    void setAlive(bool alive) {
        _still_alive = alive;
    }
    bool getAlive() const { return _still_alive; }
    
    void setFirepowerDinobot(int fire) {
        _firepower_dinobot = fire;
    }
    bool getFirepowerDinobot() const { return _firepower_dinobot; }
    
private:
    unsigned int _firepower_dinobot;
    bool _still_alive;
};

#endif
