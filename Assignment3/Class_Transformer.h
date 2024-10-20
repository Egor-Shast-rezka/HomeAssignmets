/* 
    Egor Shastin st129457@student.spbu.ru
*/

#ifndef CLASS_TRANSFORMER_H
#define CLASS_TRANSFORMER_H

// class for indicate direction
enum class Direction { Left, Right, Up, Down};

// class Weapon for composition
class Weapon {
public:
    Weapon() : _damage(0), _is_have(false) {};
    Weapon(unsigned int dam, bool hav) : _damage(dam), _is_have(hav) {}
    
    void setDamage(unsigned int dam) {
        _damage = dam;
    }
    unsigned int getDamage() const { return _damage; }
    
    void setIsHave(int hav) {
        _is_have = hav;
    }
    bool getIsHave() const { return _is_have; }
    
private:
    unsigned int _damage;
    bool _is_have;
};

// General class Transformer
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
    void setAmmo(unsigned int ammo) {
        _ammo = ammo;
    }
    unsigned int getAmmo() { return _ammo; }

    // Level
    void setLevel(unsigned int level) {
        _level = level;
    }
    unsigned int getLevel() { return _level; }

    // Fuel
    void setFuel(unsigned int fuel) {
        _fuel = fuel;
    }
    unsigned int getFuel() { return _fuel; }
    
    // Associate with Weapon
    void setAssociateWeapon(Weapon* weapon) {
        _associateWeapon = weapon;
    }
    Weapon* getAssociateWeapon() const { return _associateWeapon; }

protected:
    unsigned int _ammo;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _fuel;
    Weapon _weapon;  //composition
    Weapon* _associateWeapon;  //association
};

#endif




















