// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    // implicit type conversion
    flt = -7.66; // double constant
    sgn = flt; // will be -7
    unsgn = sgn; // two's complement

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
