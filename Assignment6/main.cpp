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
    
    bool foo() {return value.bar(number, array);}
    
    int c_1_1(){return value.c_1_1();}
    float c_2_1(){return value.c_2_1();}
    void c_3_1(){value.c_3_1();}
    
    int c_1_2(){return value.c_1_2();}
    float c_2_2(){return value.c_2_2();}
    void c_3_2(){value.c_3_2();}
    
    int c_1_3(){return value.c_1_3();}
    float c_2_3(){return value.c_2_3();}
    void c_3_3(){value.c_3_3();}
    
    
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


class Class1 {
public:
    bool bar(int number, std::vector<float>& array){
        return number > 0;
    }
    
    int c_1_1(){
        std::cout << "Today you luki number it: 8\n";
        return 1;
    }
    
    float c_2_1(){
        std::cout << "You called num PI\n";
        return 3.14;
    }
    
    void c_3_1(){
        std::cout << "You called method c_3_1\n";
    }
};

class Class2 {
public:
    bool bar(int number, std::vector<float>& array){
        return !array.empty();
    }
    
    int c_1_2(){
        std::cout << "Today you luki number it: 5\n";
        return 1;
    }
    
    float c_2_2(){
        std::cout << "You called num PI\n";
        return 3.14;
    }
    
    void c_3_2(){
        std::cout << "You called method c_3_2\n";
    }
};

class Class3 {
public:
    bool bar(int number, std::vector<float>& array){
        return number * -1 == array.size();
    }
    
    int c_1_3(){
        std::cout << "Today you luki number it: 11\n";
        return 1;
    }
    
    float c_2_3(){
        std::cout << "You called num PI\n";
        return 3.14;
    }
    
    void c_3_3(){
        std::cout << "You called method c_3_3\n";
    }
};

// Main function
int main(){
    std::vector<float> arr = {10.1f, 2.3f};
    
    // Checking the output of a template specialization
    Sample<double>* obj = new Sample<double>(10, 20, arr);
    std::cout << std::boolalpha << obj->foo() << "\n";
    delete obj;
    
    // Checking the output for Class1
    Sample<Class1>* obj_1 = new Sample<Class1>(Class1(), 20, arr);
    std::cout << std::boolalpha << obj_1->foo() << "\n";
    obj_1->c_1_1();
    delete obj_1;
    
    // Checking the output for Class2
    Sample<Class2>* obj_2 = new Sample<Class2>(Class2(), 20, arr);
    std::cout << std::boolalpha << obj_2->foo() << "\n";
    obj_2->c_1_2();
    delete obj_2;
    
    // Checking the output for Class3
    Sample<Class3>* obj_3 = new Sample<Class3>(Class3(), 20, arr);
    std::cout << std::boolalpha << obj_3->foo() << "\n";
    obj_3->c_1_3();
    delete obj_3;
    return 0;
}
