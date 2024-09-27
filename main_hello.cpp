#include <iostream>
#include <fstream>
#include "def_hello.h"

//this file includes main code

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
