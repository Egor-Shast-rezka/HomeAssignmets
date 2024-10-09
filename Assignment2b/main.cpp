/* Egor Shastin st129457@student.spbu.ru
    This function contains the main code. it get reverse polish notation => split by spaces => calculates result of an exspression.It gets file, reverses text in file and writes it in other file.
*/


#include <iostream>
#include <string>


class Stack {

private:
    int* data;
    int size;
    int power;

public:

    // general function for stack, created stack
    Stack(int len) {
        data = new int[len];
        size = 0;
        power = len;
    }

    // Add an element to the stack
    void push(int value) {
        data[size++] = value;
    }

    // Remove the top element of the stack
    void pop() {
        --size;
    }

    // Return the top element of the stack
    int top() const {
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

    // main function, calculate reverse polish notation
    // create stack
    Stack stack(str.length()+1);
    std::string elem;

    for (unsigned long i = 0; i < str.length(); i++) {

        // split by spaces
        if (str[i] != ' ') {
        
            // collect the string up to the space
            elem += str[i];
        } else if (!elem.empty()) {

            // check, (elem == digit) or (elem == sign(+-*/) => calculate part of result)
            bool isNum = true;
            for (char num : elem) {
                if (!std::isdigit(num)) {
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

            elem = ""; // Clean elem 
        }
    }

    // Process the last element (if there was no space at the end of the line)
    if (!elem.empty()) {
        bool isNum = true;
        for (char num : elem) {
            if (!std::isdigit(num)) {
                isNum = false;
                break;
            }
        }

        if (isNum) {
            int num = std::stoi(elem);
            stack.push(num);
        } else {
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

    return 0;
}






















