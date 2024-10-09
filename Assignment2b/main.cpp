/* Egor Shastin st129457@student.spbu.ru
    This function contains the main code. it get reverse polish notation => split by spaces => calculates result of an exspression.It gets file, reverses text in file and writes it in other file.
*/

#include <iostream>
#include <string>
#include <stack>
#include <sstream>


int main() {
    // receiving data from user
    std::string str;
    std::cout << "Write your exspression: ";
    std::getline(std::cin, str);

    // split by spaces
    std::istringstream iss(str);
    std::string elem;
    
    // main function, calculate reverse polish notation
    std::stack<int> stack;
    
    while (iss >> elem) {
    
        // check, (elem == digit) or (elem == sign(+-*/) => calculate part of result)
        bool isNum = true;
        for (char num : elem){
            if (!std::isdigit(num)){
                isNum = false;
                break;
            }
        }
        
        // if digit => push in stack, else calculate part of result
        if (isNum) {
            int num = std::stoi(elem);
            stack.push(num);
        } else {
            
            // calculate part of result
            int num1 = stack.top();
            stack.pop();
            int num2 = stack.top();
            stack.pop();
            if (elem == "+") {
                stack.push(num2 + num1);
            } else if (elem == "-") {
                stack.push(num2 - num1);
            } else if (elem == "*") {
                stack.push(num2 * num1);
            } else if (elem == "/") {
                stack.push(num2 / num1);
            }
        }
        
    }
    // print result exspression
    std::cout << stack.top() << std::endl;
    return 1;
}























