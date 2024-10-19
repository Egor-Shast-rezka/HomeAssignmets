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

class Weapon {
public:
    Weapon();
    
    void setDamage(unsigned int dam) { _damage = dam; }
    unsigned int getDamage() const { return _damage; }
    
    void setIsHave(int hav) { _is_have = hav; }
    bool getIsHave() const { return _is_have; }
    
private:
    unsigned int _damage;
    bool _is_have;
};

// Basic class Transformer
class Transformer {
public:
    Transformer();
    virtual ~Transformer();

    virtual bool move();
    virtual bool turn(Direction dir);
    virtual bool fire();
    virtual bool ultimate();
    virtual bool transform();

    // Ammo
    void Transformer::setAmmo(unsigned int ammo) {_ammo = ammo;}
    unsigned int Transformer::getAmmo() {return _ammo;}

    // Level
    void Transformer::setLevel(unsigned int level) {_level = level;}
    unsigned int Transformer::getLevel() {return _level;}

    // Fuel
    void Transformer::setFuel(unsigned int fuel) {_fuel = fuel;}
    unsigned int Transformer::getFuel() {return _fuel;}
    

protected:
    unsigned int _ammo;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
    Weapon _weapon;
};


// class Decepticon
class Decepticon : public Transformer {
public:
    Decepticon();
    ~Decepticon() override;
    
    bool transform() override;
    
    void setBloodiness(bool blood) { _bloodiness = blood; }
    bool getBloodiness() const {return _bloodiness; }
    
    void setFirepowerDecepticon(int fire) { _firepower_decepticon = fire; }
    bool getFirepowerDecepticon() const {return _firepower_decepticon; }
private:
    unsigned int _firepower_decepticon;
    bool _bloodiness;
};


// class Autobot
class Autobot : public Transformer {
public:
    Autobot();
    ~Autobot() override;
    
    bool transform() override;
    
    void setHelping(bool help) { _helping = help; }
    bool getHelping() const {return _helping; }
    
    void setFirepowerAutobot(int fire) { _firepower_autobot = fire; }
    bool getFirepowerAutobot() const {return _firepower_autobot; }
    
private:
    unsigned int _firepower_autobot;
    bool _helping;
};


// class Dinobot
class Dinobot : public Transformer {
public:
    Dinobot();
    ~Dinobot() override;
    
    bool transform() override;
    
    void setAlive(bool alive) { _still_alive = alive; }
    bool getAlive() const {return _still_alive; }
    
    void setFirepowerDinobot(int fire) { _firepower_dinobot = fire; }
    bool getFirepowerDinobot() const {return _firepower_dinobot; }
    
private:
    unsigned int _firepower_dinobot;
    bool _still_alive;
};

#endif




















