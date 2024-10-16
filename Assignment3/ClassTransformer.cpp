/* Egor Shastin st129457@student.spbu.ru
    
*/

#include <iostream>
#include "ClassTransformer.h"

Transformer::Transformer() 
    : _level(1), _strength(100), _range(50), _fuel(100), _ammo(0) {}

bool Transformer::fire() {
    if (_ammo > 0) {
        _ammo--;
        std::cout << "Firing..." << std::endl;
        return true;
    } else {
        std::cout << "No ammo!" << std::endl;
        return false;
    }
}

