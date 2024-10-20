/* 
    Egor Shastin st129457@student.spbu.ru
    This file contains the code for the main functions of the Transformer class, 
    its constructor and destructor.
*/

#include <iostream>
#include "Class_Transformer.h"

// Class constructor implementation
Transformer::Transformer() : 
    _level(15), _strength(100), _fuel(20), _ammo(5), _weapon(100, true), _associateWeapon(nullptr) {
    std::cout << "-> Transformer created." << std::endl;
}

// Class deconstructor implementation
Transformer::~Transformer() {
    std::cout << "-> Transformer destroyed.." << std::endl;
}

// Function fire implementation
bool Transformer::fire() {
    if (_associateWeapon && _associateWeapon->getIsHave()){
        std::cout << "-> Fire. Damage: " << _associateWeapon->getDamage() << std::endl;
        return true;
    } else if (_ammo > 0) {
        _ammo--;
        std::cout << "-> Firing..." << std::endl << std::endl;
        return true;
    } else {
        std::cout << "-> No ammo!" << std::endl;
        return false;
    }
}

// Function turn implementation
bool Transformer::turn(Direction dir) {
    if (_fuel == 0){
        std::cout << "-> fuel is lost" << std::endl << std::endl;
        return false;
    }
    _fuel--;
    switch (dir) {
        case Direction::Left:
            std::cout << "-> Turning left.." << std::endl << std::endl;
            break;
        case Direction::Right:
            std::cout << "-> Turning right.." << std::endl << std::endl;
            break;
        case Direction::Up:
            std::cout << "-> Turning up.." << std::endl << std::endl;
            break;
        case Direction::Down:
            std::cout << "-> Turning down.." << std::endl << std::endl;
            break;
    }
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}

// Mini function for transformer implementation

// Ultimate for Transform
bool Transformer::ultimate() {
    if (_strength < 100) {
        std::cout << "-> Not enogh strength" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Ultimate!!!! ..." << std::endl;
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}

// Transformation for Transform
bool Transformer::transform() {
    if (_level < 10) {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Transforming..." << std::endl << std::endl;
    return true;
}

// Moving for Transform
bool Transformer::move() {
    if (_fuel == 0) {
        std::cout << "-> Fuel is lost" << std::endl << std::endl;
        return false;
    }
    _fuel--;
    std::cout << "-> Moving..." << std::endl << std::endl;
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}


























