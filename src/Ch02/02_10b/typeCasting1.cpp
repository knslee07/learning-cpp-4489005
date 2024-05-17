// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt=-7.66; //this is double but converted to flt
    sgn=flt; //-7
    usgn=sgn; //

    std::cout << "float: " << flt << std::endl;
    std::cout << "int32: " << sgn << std::endl;
    std::cout << "uint32: " << usgn << std::endl;
std::cout << "uint32: " << (int32_t) usgn << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
/*
float: -7.66
int32: -7
uint32: 4294967289
uint32: -7
*/