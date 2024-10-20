/*
    Egor Shastin st129457@student.spbu.ru
    This code allows you to interact with all folders, unites them. 
    Here you can try all the functions of the robots and set the type of robot (Autobot/Decepticon/Dinobot)
*/

#include <iostream>
#include <string> // only for getting data from user, not used in general code
#include "Class_Transformer.h"
#include "Class_Autobot.h"
#include "Class_Dinobot.h"
#include "Class_Decepticon.h"

//Main function
int main() {
    Autobot newTransformer;  // May choose autobot/decepticon/dinobot/transformer
    Weapon specialWeapon(150, true);
    newTransformer.setAssociateWeapon(&specialWeapon);  //Set associate Weapon
    
    bool work = true;
    while (work) {
    
        // Get text from user/plauer
        std::string text;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "Write your command (off, ammo, turn, level, fuel - set meaning" << std::endl;
        std::cout << "fire, move, transform, ulta): ";
        std::getline(std::cin, text);
        
        // All actions
        if (text == "off") {
            work = false;
            
        } else if (text == "ammo") { // Generating ammunition
        
            // Get data from user
            std::string cnt;
            std::cout << "Quantity ammo: ";
            std::getline(std::cin, cnt);
            
            // Set ammunition (_ammo)
            unsigned int ammo = std::stoi(cnt);
            newTransformer.setAmmo(ammo);
            std::cout << "Current ammo: " << newTransformer.getAmmo() << std::endl << std::endl;
            
        } else if (text == "fuel") { // Generating fuel
        
            // Get data from user
            std::string cnt;
            std::cout << "Quantity fuel: ";
            std::getline(std::cin, cnt);

            // Set fuel (_fuel)
            unsigned int fueli = std::stoi(cnt);
            newTransformer.setFuel(fueli);
            std::cout << "Current fuel: " << newTransformer.getFuel() << std::endl << std::endl;
            
        } else if (text == "level") { // Generating level
        
            // Get data from user
            std::string cnt;
            std::cout << "Quantity level: ";
            std::getline(std::cin, cnt);

            // Set level (_level)
            unsigned int level = std::stoi(cnt);
            newTransformer.setLevel(level);
            std::cout << "Current level: " << newTransformer.getLevel() << std::endl << std::endl;
            
        } else if (text == "turn") { // move in left/right ....
         
            // Get data from user
            std::string direction;
            std::cout << "Direction (left, right, up, down): ";
            std::getline(std::cin, direction);

            // Turn Transformer
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
             
        } else if (text == "fire") {  // Turn Transformer
            newTransformer.fire();
            std::cout << "Ammo after firing: " << newTransformer.getAmmo() << std::endl << std::endl;
            
        } else if (text == "move") { // Move Transformer
            newTransformer.move();
            
        } else if (text == "transform") { // Transforming Transform (connected with Transformer/Aotobot...)
            newTransformer.transform();
            
        } else if (text == "ulta") { // Ultimate Transformer
            newTransformer.ultimate();
            
        } else { // In case of incorrect command
            std::cout << "Unknown command!" << std::endl << std::endl;
        }
    }

    return 0;
}



















