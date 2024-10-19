/* Egor Shastin st129457@student.spbu.ru
    
*/

#include <iostream>
#include "ClassTransformer.h"

Transformer::Transformer() : _level(15), _strength(100), _fuel(20), _ammo(5), _weapon(100, true) {
    std::cout << "-> Transformer created." << std::endl;
}

Transformer::~Transformer() {
    std::cout << "-> Transformer destroyed.." << std::endl;
}

bool Transformer::fire() {
    if (_ammo > 0) {
        _ammo--;
        std::cout << "-> Firing..." << std::endl << std::endl;
        return true;
    } else {
        std::cout << "-> No ammo!" << std::endl;
        return false;
    }
}

bool Transformer::turn(Direction dir) {
    if (_fuel == 0){
        std::cout << "-> fuel is lost" << std::endl << std::endl;
        return false;
    }
    _fuel--;
    switch (dir) {
        case Direction::left:
            std::cout << "-> Turning left.." << std::endl << std::endl;
            break;
        case Direction::right:
            std::cout << "-> Turning right.." << std::endl << std::endl;
            break;
        case Direction::up:
            std::cout << "-> Turning up.." << std::endl << std::endl;
            break;
        case Direction::down:
            std::cout << "-> Turning down.." << std::endl << std::endl;
            break;
    }
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}





bool Transformer::ultimate() {
    if (_strength < 100) {
        std::cout << "-> Not enogh strength" << std::endl << std::endl;
        return false;
    }
    _fuel -= 10;
    std::cout << "-> Ultimate!!!! ..." << std::endl;
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}

bool Transformer::transform() {
    if (_level < 10) {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Transforming..." << std::endl << std::endl;
    return true;
}

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


// Creation class Decepticon  <--------------
Decepticon::Decepticon() : _firepower_decepticon(100), _bloodiness(true) {
    std::cout << "-> Decepticon created" << std::endl;
}
Decepticon::~Decepticon() {
    std::cout << "-> Decepticon destroyed" << std::endl;
}

bool Decepticon::transform() {
    if (_level < 10) {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Decepticon transforming in a Tank." << std::endl << std::endl;
    return true;
}

// Creation class Autobot <--------------
Autobot::Autobot() : _firepower_autobot(100), _helping(true) {
    std::cout << "-> Autobot created" << std::endl;
}
Autobot::~Autobot() {
    std::cout << "-> Autobot destroued" << std::endl;
}

bool Autobot::transform() {
    if (_level < 10) {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Autobot transforming in a Car." << std::endl << std::endl;
    return true;
}

// Creation class Dinobot <--------------
Dinobot::Dinobot() : _firepower_dinobot(100), _still_alive(true) {
    std::cout << "-> Dinobot created" << std::endl;
}
Dinobot::~Dinobot() {
    std::cout << "-> Dinobot destroyed" << std::endl;
}

bool Dinobot::transform() {
    if (_level < 10) {
        std::cout << "-> Not enogh level" << std::endl << std::endl;
        return false;
    }
    std::cout << "-> Dinobot transforming in a dinosaur." << std::endl << std::endl;
    return true;
}

























