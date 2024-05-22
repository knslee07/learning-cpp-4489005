// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow;

    my_cow = new cow("Gertie", 3, cow_purpose::hide);
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    delete my_cow;
    std::cout << std::endl << std::endl;
    return (0);
}

/*
The primary difference between the previous `codeDemo.cpp` and the new code that uses a pointer to an instance of the `cow` class is the way the `cow` object is created and managed in memory. Here’s a detailed explanation:

### Direct Object Instantiation vs. Pointer-Based Instantiation

1. **Direct Object Instantiation (Stack Allocation)**:
   In `codeDemo.cpp`, the `cow` object is created directly on the stack:
   ```cpp
   cow my_cow("Hildy", 7, cow_purpose::pet);
   ```
   - **Memory Allocation**: The object `my_cow` is allocated on the stack.
   - **Lifetime**: The object's lifetime is tied to the scope in which it is created. When the scope (such as the function) ends, the object is automatically destroyed.
   - **Access**: Members are accessed using the dot operator (`.`).

2. **Pointer-Based Instantiation (Heap Allocation)**:
   In the new code, the `cow` object is created on the heap and managed via a pointer:
   ```cpp
   cow *my_cow = new cow("Gertie", 3, cow_purpose::hide);
   ```
   - **Memory Allocation**: The object `my_cow` is dynamically allocated on the heap using the `new` operator.
   - **Lifetime**: The object's lifetime is manually controlled. It remains in memory until it is explicitly deleted using the `delete` operator.
   - **Access**: Members are accessed using the arrow operator (`->`).

### Why Use a Pointer to the Class Instance?

1. **Dynamic Lifetime Management**:
   - Using `new` and `delete` allows you to control the exact lifetime of the object, which can be useful when the object's lifetime needs to extend beyond the scope in which it was created.
   - This is particularly important in scenarios where objects need to be shared, passed around, or have a lifetime that is not tied to a specific scope, such as in data structures (e.g., linked lists, trees) or in resource management scenarios.

2. **Flexibility and Polymorphism**:
   - Dynamic allocation and pointers are often used in conjunction with polymorphism (e.g., when dealing with inheritance and virtual functions).
   - You can create arrays of objects, manage complex data structures, and utilize polymorphic behavior more easily with pointers.

3. **Manual Control Over Memory**:
   - Pointers provide manual control over memory allocation, which can lead to more efficient memory usage in certain situations.
   - However, this also introduces the responsibility of managing memory correctly, including avoiding memory leaks and ensuring proper deletion of dynamically allocated objects.

### Example Comparison

**Direct Object Instantiation (Stack Allocation)**:
```cpp
#include <iostream>
#include <string>
#include "cow.h"

int main() {
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;

    return 0;
}
```

**Pointer-Based Instantiation (Heap Allocation)**:
```cpp
#include <iostream>
#include <string>
#include "cow.h"

int main() {
    cow *my_cow = new cow("Gertie", 3, cow_purpose::hide);
    std::cout << my_cow->get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;

    delete my_cow; // Freeing the dynamically allocated memory
    return 0;
}
```

### Key Points

- **Stack Allocation**:
  - Simpler and automatically managed.
  - Suitable for objects with a well-defined scope and lifetime.
  - Less prone to memory leaks since objects are automatically destroyed.

- **Heap Allocation**:
  - Offers greater flexibility and control over object lifetime.
  - Necessary for objects that need to outlive the scope in which they are created or for complex data structures.
  - Requires careful memory management to avoid leaks and ensure proper cleanup.

By understanding these differences, you can choose the appropriate method for creating and managing objects based on the specific requirements of your program.*/