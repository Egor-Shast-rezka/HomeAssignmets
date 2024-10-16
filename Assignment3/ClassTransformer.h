/* Egor Shastin st129457@student.spbu.ru
    
*/

#ifndef CLASSTRANSFORMER_H
#define CLASSTRANSFORMER_H

enum class Direction {
    LEFT,
    RIGHT,
    UP,
    DOWN
};

class Transformer {
public:
    Transformer();

    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire();
    bool ultimate();
    bool transform();

    void setAmmo(unsigned int ammo);
    unsigned int getAmmo();

private:
    unsigned int _level;
    unsigned int _strength;
    unsigned int _range;
    unsigned int _fuel;
    unsigned int _ammo;
};

#endif

