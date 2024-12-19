/*
    Egor Shastin st129457@student.spbu.ru
    This code contains an illustration of the program (template class Sample) working
*/

#include <iostream>
#include <vector>
#include "title.h"

// Main function
int main()
{

    // Checking the output of a template specialization (int)
    Sample<int>* obj_int = new Sample<int>(10, 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << "template specialization (for int) " << obj_int->foo() << "\n";
    delete obj_int;

    // Checking the output of a template specialization (double)
    Sample<double>* obj_doubl = new Sample<double>(10, 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << "template specialization (for double) " << obj_doubl->foo() << "\n";
    delete obj_doubl;

    // Checking the output for Class1
    Sample<Class1>* obj_1 = new Sample<Class1>(Class1(), 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << obj_1->foo() << "\n";
    obj_1->c_1_1();
    obj_1->c_2_1();
    obj_1->c_3_1();
    delete obj_1;

    // Checking the output for Class2
    Sample<Class2>* obj_2 = new Sample<Class2>(Class2(), 20, {10.1f, 2.3f});
    std::cout << std::boolalpha << obj_2->foo() << "\n";
    obj_2->c_1_2();
    obj_2->c_2_2();
    obj_2->c_3_2();
    delete obj_2;

    // Checking the output for Class3
    Sample<Class3>* obj_3 = new Sample<Class3>(Class3(), -2, {10.1f, 2.3f});
    std::cout << std::boolalpha << obj_3->foo() << "\n";
    obj_3->c_1_3();
    obj_3->c_2_3();
    obj_3->c_3_3();
    delete obj_3;

    return 0;
}
