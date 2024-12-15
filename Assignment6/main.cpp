/*
    This code contain ...
*/

#include <iostream>
#include <vector>

// This is main class
template<typename Type>
class Sample {
public:

    // Constructor for Template Class
    Sample(Type val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {
        std::cout << "First start\n";
    }
    
    // Destructor for Template Class
    ~Sample() {
        std::cout << "I am break\n";
    }
    
    bool foo() {
        return value.bar(number, array);
    }
    
private:
    Type value;
    int number;
    std::vector<float> array;
};

// Partial specialization for template (if Type = int)
template<>
class Sample<int> {
public:

    // Constructor for Template Class
    Sample(int val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {
        std::cout << "First start\n";
    }
    
    // Destructor for Template Class
    ~Sample() {
        std::cout << "I am break\n";
    }
    
    bool foo() {
        return true;
    }
private:
    int value;
    int number;
    std::vector<float> array;
};

// Partial specialization for template (if Type = double)
template<>
class Sample<double> {
public:
    
    // Constructor for Template Class
    Sample(double val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {
        std::cout << "First start\n";
    }
    
    // Destructor for Template Class
    ~Sample() {
        std::cout << "I am break\n";
    }
    
    bool foo() {
        return false;
    }
private:
    double value;
    int number;
    std::vector<float> array;
};

// Main function
int main(){
    std::cout << "Hi\n";
    std::vector<float> arr = {10.1, 2,3};
    Sample<double> obj(10, 20, arr);
    std::cout << std::boolalpha << obj.foo() << "\n";
    return 0;
}
