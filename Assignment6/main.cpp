/*

*/

#include <iostream>
#include <vector>

template<typename Type>
class Sample {
public:
    Sample(Type val, int num, std::vector<float> arr) : value(val), number(num), array(arr) {
        std::cout << "First start\n";
    }
    ~Sample() {
        std::cout << "I am break\n";
    }
    
    /*
    bool foo() {
        return bar(int, std::vector<float>&)
    }
    */
    
private:
    Type value;
    int number;
    std::vector<float> array;
};

int main(){
    std::cout << "Hi\n";
    std::vector<float> arr = {10.1, 2,3};
    Sample<int> obj(10, 20, arr);
    return 0;
}
