// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define AGE 4

int main(){
    const size_t AGE=4;
    int age[AGE];
    float temp[]= {31.5, 32.7, 38.9};

    age[0]=25;
    age[1]=20;
    age[2]=19;
    age[3]=19;

    std::cout << age[0] << std::endl;
    std::cout << age[1] << std::endl;
    std::cout << age[2] << std::endl;
    std::cout << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << temp[0] << std::endl;
    std::cout << temp[1] << std::endl;
    std::cout << temp[2] << std::endl;
    std::cout << temp[3] << std::endl;

    return (0);
}
