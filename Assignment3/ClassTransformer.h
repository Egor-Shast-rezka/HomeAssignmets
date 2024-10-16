/* Egor Shastin st129457@student.spbu.ru
    here is where the class declaration occurs.
*/

#ifndef CLASSTRANSFORMER_H
#define CLASSTRANSFORMER_H

enum class Direction {
    left,
    right,
    up,
    down
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
    
    void setLevel(unsigned int level);
    unsigned int getLevel();
    
    void setFuel(unsigned int fuel);
    unsigned int getFuel();

private:
    unsigned int _ammo;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
};

#endif

