// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow1{
public: //class hides its members.
    std::string name;
    int age;
    cow_purpose purpose;
};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){ //constructor
        //no return type, the same name as teh class
        name= name_i;
        age=age_i;
        purpose=purpose_i;
    }    
    std::string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
    cow_purpose get_cow_purpose() {
        return purpose;
    }

private: 
    std::string name;
    int age;
    cow_purpose purpose;

};

int main(){
    cow1 my_cow1;
    my_cow1.age = 5;
    my_cow1.name = "Betsy";
    my_cow1.purpose = cow_purpose::dairy;
    std::cout << my_cow1.name << " is a type-" << (int)my_cow1.purpose << " cow." << std::endl;
    std::cout << my_cow1.name << " is " << my_cow1.age << " years old." << std::endl;
    
    cow my_cow("Betty", 4, cow_purpose::meat);
    std::cout << my_cow.get_name() << " is a type-" << (uint8_t)my_cow.get_cow_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
