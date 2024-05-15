// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b =5; //a and b are global.

int main(){
    bool my_flag;
    a=7;
    my_flag=false;

    std::cout << "a? " << a << std::endl;
    std::cout << "b? " << b << std::endl;
    std::cout << "my flag? " << my_flag << std::endl;
    std::cout << "a+b? " << a+b << std::endl;
    unsigned int positive;
    positive = b-a;
    std::cout << "positive? " << positive << std::endl;
    // This is because 5 - 7 is -2, which is converted to an unsigned int, resulting in a large positive number.

    std::cout << std::endl << std::endl;
    return (0);
}
