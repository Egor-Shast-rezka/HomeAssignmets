/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Autobot, it declares the constructor, 
    destructor, and main functions of this class.
*/

#ifndef CLASS_AUTOBOT_H
#define CLASS_AUTOBOT_H

#include "Class_Transformer.h"

// Declare class Autobot
class Autobot : public Transformer {
public:
    Autobot();
    ~Autobot() override;
    
    bool transform() override;

    // Helping    
    void setHelping(bool help);
    
    bool getHelping() const;
    
    // Firepower
    void setFirepowerAutobot(int fire);
    
    bool getFirepowerAutobot() const;
    
    // This if frends operator
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
    friend std::istream& operator>>(std::istream& is, Autobot& autobot);
    
private:
    unsigned int _firepower_autobot;
    bool _helping;
};

#endif
