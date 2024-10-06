/* Egor Shastin st129457@student.spbu.ru
    This function contains the main code
*/

#include <iostream>
#include "def_hello.h"

void print_hello() {
    std::cout << "Hello, world!" << std::endl;
    while (true){
        std::string str;
        std::cout << "Write your text (or off progr. with 'off'): ";
        std::getline(std::cin, str);

        if (str == "off") break;

        std::cout << "Hello, " << str << "!" << std::endl;

	}
}
