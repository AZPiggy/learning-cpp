// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main()
{
    int age[4];
    float temperature[] = {31.5, 32.7, 38.9};

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    for (int i = 0; i < 4; i++)
    {
        std::cout << "The age " << i << " is " << age[i] << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
