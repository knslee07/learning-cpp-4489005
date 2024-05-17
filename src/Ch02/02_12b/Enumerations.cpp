// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//enum cow_purpose {dairy, meat, hide, pet};
//enum grocery_section {canned, frozen, meat, laundry, dairy, kabery};
/*meat and dairy will be flagged*/

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, kabery};
//enum classes are strongly typed. It will not assume that they are integers.


int main(){
    int meat=8; //is this possible? meat is above. local >global
    int a;
    cow_purpose b;

    a = (int) cow_purpose::meat;
    b = cow_purpose::meat;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << (int) b << std::endl;
    // cout does not work with a custom operand like cow_purpose

    std::cout << std::endl << std::endl;
    return (0);
}
