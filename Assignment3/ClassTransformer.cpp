/* Egor Shastin st129457@student.spbu.ru
    
*/

#include <iostream>
#include "ClassTransformer.h"

Transformer::Transformer() : _level(5), _strength(5), _fuel(5), _ammo(5) {}

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

//bool Transformer::level()

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
    _fuel -= 100;
    std::cout << "-> Ultimate!!!! ..." << std::endl << std::endl;
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

bool Transformer::jump() {
    if (_fuel == 0) {
        std::cout << "-> Fuel is lost" << std::endl << std::endl;
        return false;
    }
    _fuel--;
    std::cout << "-> Jumping..." << std::endl << std::endl;
    std::cout << "-> Left fuel: " << _fuel << std::endl << std::endl;
    return true;
}

























