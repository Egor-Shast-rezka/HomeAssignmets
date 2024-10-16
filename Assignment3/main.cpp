/* Egor Shastin st129457@student.spbu.ru
    
*/

#include "ClassTransformer.h"
#include <iostream>

void Transformer::setAmmo(unsigned int ammo) {
    _ammo = ammo;
}

unsigned int Transformer::getAmmo() {
    return _ammo;
}

int main() {
    Transformer newTransformer;

    newTransformer.setAmmo(10);

    std::cout << "Current ammo: " << newTransformer.getAmmo() << std::endl;

    newTransformer.fire();
    std::cout << "Ammo after firing: " << newTransformer.getAmmo() << std::endl;

    return 0;
}

