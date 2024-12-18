/*
    Egor Shastin st129457@student.spbu.ru
    This code contains an illustration of the program (template class Sample) working
*/

#include <iostream>
#include <vector>
#include "title.h"

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
