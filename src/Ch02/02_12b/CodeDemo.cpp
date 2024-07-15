// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
// dairy = 0, meat = 1, hide = 2, pet = 3
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};
// enum class prevents redefinition

int main(){
    int meat = 8;
    cow_purpose a;

    a = cow_purpose::meat;

    std::cout << "a = " << (int)a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
