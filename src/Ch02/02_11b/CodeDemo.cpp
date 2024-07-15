// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (fahrenheit - 32); // if integer, will perform integer division and get an error

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float:           " << weight << std::endl;
    std::cout << "Integer Part:    " << (int)weight << std::endl;
    std::cout << "Fractional Part: " << (int)((weight - (int)weight) * 10000) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
