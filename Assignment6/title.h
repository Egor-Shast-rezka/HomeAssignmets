/*

*/

#ifndef TITLE_H
#define TITLE_H

// This is main class
template<typename Type>
class Sample {
public:

    // Constructor for Template Class
    Sample(Type val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {}
    
    // Destructor for Template Class
    ~Sample() {}
    
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
    Sample(int val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {}
    
    // Destructor for Template Class
    ~Sample() {}
    
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
    Sample(double val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {}
    
    // Destructor for Template Class
    ~Sample() {}
    
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
    Class1(int val = 0) : value(val) {}
    
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
private:
    int value;
};

class Class2 {
public:
    Class2(int val = 0) : value(val) {}
    
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
private:
    int value;
};

class Class3 {
public:
    Class3(int val = 0) : value(val) {}
    
    bool bar(int number, std::vector<float>& array){
        return static_cast<std::vector<float>::size_type>(-number) == array.size();
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
private:
    int value;
};

#endif
