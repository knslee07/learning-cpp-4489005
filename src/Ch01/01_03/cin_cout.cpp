// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    /*When std::string str; is executed, it initializes str as an empty string. That is, str starts with no characters in it, but it can dynamically grow to accommodate any length of text assigned to it during the program's execution.*/
    std::cout << "input your name!" << std::endl;
    std::cin >> str;
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
