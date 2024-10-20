/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Autobot, it declares the constructor, 
    destructor, and main functions of this class.
*/

#ifndef CLASS_AUTOBOT_H
#define CLASS_AUTOBOT_H

#include "Class_Transformer.h"

// Creating class Autobot
class Autobot : public Transformer {
public:
    Autobot();
    ~Autobot() override;
    
    bool transform() override;
    
    void setHelping(bool help) {
        _helping = help;
    }
    
    bool getHelping() const { return _helping; }
    
    void setFirepowerAutobot(int fire) {
        _firepower_autobot = fire; 
    }
    
    bool getFirepowerAutobot() const { return _firepower_autobot; }
    
private:
    unsigned int _firepower_autobot;
    bool _helping;
};

#endif
