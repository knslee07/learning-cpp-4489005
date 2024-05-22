#include "cow.h"
/*when you hit run on this, codeDemo.cpp will be executed
because in tasks.json, "${fileDirname}/*.cpp",//list of source files to compile*/

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name() const{
return name;
}
int cow::get_age() const{
    return age;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
void cow::set_age(int new_age) {//placeholder should not be "age"
    age= new_age;
}

/*
2. cow.cpp: Implementation File
Purpose: The implementation file (cow.cpp) contains the definitions of the member functions declared in the cow.h header file. This is where the actual code for the member functions of the cow class is written.
Contents: Definitions of the constructor and member functions of the cow class.
Usage: This file is compiled to create the object code that defines the behavior of the cow class.
*/