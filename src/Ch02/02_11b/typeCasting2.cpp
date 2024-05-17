// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit= 100;
    int celsius;

    celsius= (5/9) * (fahrenheit -21); //0?
    std::cout << celsius << std::endl;

    celsius= ((float)5/9) * (fahrenheit -21);
    std::cout << celsius << std::endl;

    float weight = 10.99;
    std::cout << (int) weight << std::endl;
    std::cout << (int) ((weight - (int) weight) *10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
