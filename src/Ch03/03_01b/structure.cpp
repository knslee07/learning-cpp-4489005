// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};
/*enum class (also known as a scoped enumeration) is strongly typed and does not implicitly convert to integers. This is a design feature to prevent accidental misuse of enumerations and to provide better type safety.
*/
struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." << std::endl;
    // Casting to unsigned int
    std::cout << my_cow.name << " is a type-" << (unsigned int) my_cow.purpose << " cow." << std::endl;

    // Casting using std::underlying_type
    std::cout << my_cow.name << " is a type-" << static_cast<std::underlying_type<cow_purpose>::type>(my_cow.purpose) << " cow." << std::endl;

    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
