/*
    Egor Shastin st129457@student.spbu.ru
    This is the header file for the inherited class Decepticon, it declares the constructor, 
    destructor, and main functions of this class.
*/

#ifndef CLASS_DECEPTICON_H
#define CLASS_DECEPTICON_H

#include "Class_Transformer.h"

// class Decepticon
class Decepticon : public Transformer {
public:
    Decepticon();
    ~Decepticon() override;
    
    bool transform() override;
    
    void setBloodiness(bool blood) {
        _bloodiness = blood;
    }
    
    bool getBloodiness() const { return _bloodiness; }
    
    void setFirepowerDecepticon(int fire) {
        _firepower_decepticon = fire;
    }
    
    bool getFirepowerDecepticon() const { return _firepower_decepticon; }
    
private:
    unsigned int _firepower_decepticon;
    bool _bloodiness;
};

#endif
