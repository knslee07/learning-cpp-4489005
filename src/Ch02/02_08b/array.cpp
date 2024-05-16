// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define AGE 4

int main(){
    const size_t AGE=4;
    int age[AGE];
    float temp[]= {31.5, 32.7, 38.9};

/*Implicit conversion, also known as type coercion, is the automatic conversion of a value from one data type to another by the compiler. This happens without any explicit instruction from the programmer. Implicit conversion typically occurs in operations that involve mixed data types, where the compiler converts one or more operands to a common type to perform the operation.

In the case of the array initialization float temp[] = {31.5, 32.7, 38.9};, implicit conversion is happening because the values provided in the initializer list are of type double by default (as all floating-point literals in C and C++ are of type double unless specified otherwise), but they are being assigned to an array of type float.*/

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
