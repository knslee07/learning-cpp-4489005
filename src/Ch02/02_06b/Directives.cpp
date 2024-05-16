// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG //no need to have a value

int main(){
    int32_t large = CAPACITY;
    /*int32_t is a standardized type defined in the C99 standard (and later) and C++11 (and later) in the <stdint.h> header in C and <cstdint> in C++. It guarantees a 32-bit signed integer across all platforms.*/
    uint8_t small =37;
#ifdef DEBUG
    std::cout << "[about to perform the addition] will be shown if DEBUG is defined" << std::endl;
    //this is grayed out if cout is not defined.
#endif
    large +=small;

    std::cout << "The large integer is " <<large << std::endl; 
    std::cout << std::endl;
    return (0);
}
