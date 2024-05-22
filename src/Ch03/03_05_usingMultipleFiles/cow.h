#pragma once  //not all compilers recognize this

#ifndef COW_H
#define COW_H
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif //cow_h

/*1. cow.h: Header File
Purpose: The header file (cow.h) contains the declarations of the cow class and any enums or other types that are needed by this class. It defines the interface for the class without including implementation details.
Contents: Declarations of the cow class, its member functions, and the cow_purpose enum.
Usage: This file is included in other source files (using #include "cow.h") that need to use the cow class, allowing those files to understand the structure and interface of the class.
*/