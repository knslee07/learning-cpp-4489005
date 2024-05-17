// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1=25;
    char array_str1[LENGTH1]= "Hey gyus! ";
    char array_str2[]= "What's up?";

    std::string std_str1="Hie everyone!";
    std::string std_str2="How's it going?";

    strncat(array_str1, array_str2, LENGTH1);
    // dest string, origin str, length
    std::cout << array_str1 << std::endl;
    std::cout << std_str1+std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
    //Hey gyus! What's up?
    //Hie everyone!How's it going?
}
