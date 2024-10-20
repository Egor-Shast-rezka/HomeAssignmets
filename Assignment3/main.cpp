/*
    Egor Shastin st129457@student.spbu.ru
*/

#include <iostream>
#include <string> // only for getting data from user, not used in general code
#include "Class_Transformer.h"
#include "Class_Autobot.h"
#include "Class_Dinobot.h"
#include "Class_Decepticon.h"

// main function
int main() {
    
    // I didnt understand what you want to see, before created mini-game in terminal.
    // But i completed all generals ideas and tasks.
    
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "RULE:   For each turn, movement one fuel is removed." << std::endl;
    std::cout << "Ultimate from 100 strength. Transformation from 10 level." << std::endl;
    std::cout << "In start: level(5), strength(5), fuel(5), ammo(5)" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    
    Autobot newTransformer;  // May choose autobot/decepticon/dinobot/transformer <= 3 class inheritance and 1 basic
    Weapon specialWeapon(150, true);
    newTransformer.setAssociateWeapon(&specialWeapon);  //set associate Weapon
    
    bool work = true;
    while (work) {
    
        // get text from user/plauer
        std::string text;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "Write your command (off, ammo, turn, level, fuel - set meaning" << std::endl;
        std::cout << "fire, move, transform, ulta): ";
        std::getline(std::cin, text);
        
        // all actions
        if (text == "off") {
            work = false;
            
        } else if (text == "ammo") { // generating ammunition
            std::string cnt;
            std::cout << "Quantity ammo: ";
            std::getline(std::cin, cnt);

            unsigned int ammo = std::stoi(cnt);
            newTransformer.setAmmo(ammo);
            std::cout << "Current ammo: " << newTransformer.getAmmo() << std::endl << std::endl;
            
        } else if (text == "fuel") { // generating fuel
            std::string cnt;
            std::cout << "Quantity fuel: ";
            std::getline(std::cin, cnt);

            unsigned int fueli = std::stoi(cnt);
            newTransformer.setFuel(fueli);
            std::cout << "Current fuel: " << newTransformer.getFuel() << std::endl << std::endl;
            
        } else if (text == "level") { // generating level
            std::string cnt;
            std::cout << "Quantity level: ";
            std::getline(std::cin, cnt);

            unsigned int level = std::stoi(cnt);
            newTransformer.setLevel(level);
            std::cout << "Current level: " << newTransformer.getLevel() << std::endl << std::endl;
            
        } else if (text == "turn") { // move in left/right ....
            std::string direction;
            std::cout << "Direction (left, right, up, down): ";
            std::getline(std::cin, direction);

            Direction dir;
            if (direction == "left") {
                dir = Direction::Left;
            } else if (direction == "right") {
                dir = Direction::Right;
            } else if (direction == "up") {
                dir = Direction::Up;
            } else if (direction == "down") {
                dir = Direction::Down;
            } else {
                std::cout << "-> Invalid direction!" << std::endl;
                continue;
            }
            newTransformer.turn(dir);
             
        } else if (text == "fire") {
            newTransformer.fire();
            std::cout << "Ammo after firing: " << newTransformer.getAmmo() << std::endl << std::endl;
            
        } else if (text == "move") {
            newTransformer.move();
            
        } else if (text == "transform") {
            newTransformer.transform();
            
        } else if (text == "ulta") {
            newTransformer.ultimate();
            
        } else {
            std::cout << "Unknown command!" << std::endl << std::endl;
        }
    }

    return 0;
}



















