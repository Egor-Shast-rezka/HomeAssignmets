/* Egor Shastin st129457@student.spbu.ru
    This function contains the main code. it get reverse polish notation => split by spaces => calculates result of an exspression.It gets file, reverses text in file and writes it in other file.
*/


#include <iostream>
#include <string>
#include <sstream>


class Stack {

private:
    double* data;
    int size;
    int power;

public:

    // general function for stack, created stack
    Stack(int len) {
        data = new double[len];
        size = 0;
        power = len;
    }

    // Add an element to the stack
    void push(double value) {
        data[size++] = value;
    }

    // Remove the top element of the stack
    void pop() {
        --size;
    }

    // Return the top element of the stack
    double top() const {
        if (size > 0) {
            return data[size - 1];
        } else {
            return -1;  // If the stack is empty, return -1
        }
    }
};



int main() {

    // receiving data from user
    std::string str;
    std::cout << "Write your expression: ";
    std::getline(std::cin, str);
    
    // ebumerate numbers and characters through spaces
    std::istringstream text(str);
    std::string elem;
    
    // main function, calculate reverse polish notation
    // create stack
    Stack stack(str.length()+1);

    while(text >> elem) {

        // check, (elem == digit) or (elem == sign(+-*/) => calculate part of result)
        bool isNum = true;
        for (char num : elem) {
            if (!std::isdigit(num) && num != '.') {
                isNum = false;
                break;
            }
        }

        // if digit => push in stack, else calculate part of result
        if (isNum) {
            double num = std::stod(elem);
            stack.push(num);
        } else {
            
            // calculate part of result
            double num1 = stack.top();
            stack.pop();
            double num2 = stack.top();
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

    return 0;
}






















