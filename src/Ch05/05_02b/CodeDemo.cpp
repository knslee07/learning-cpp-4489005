// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

//arguments can be by value, ptr, or reference.
int square (int x) {
    x = x*x;
    return x;
}

void swap (int *x, int *y) {
    int temp= *x;
    *x=*y;
    *y=temp;
}

void swap2 (int& x, int& y) {
    /*int& x: x is a reference to an integer, meaning it is an alias for the integer passed to the function.
int& y: y is a reference to another integer.*/
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a = 9, b;
    // TODO: square
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap  
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap2(a,b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
/*
A reference in C++ is an alias for another variable. 
When you pass a variable to a function by reference, the function operates on the original variable rather than a copy of it. 
This allows the function to modify the original variable's value.
*/