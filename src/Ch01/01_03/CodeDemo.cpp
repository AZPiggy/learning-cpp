// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str; // declare the variable str (string type)
    // arrow opposite to cout
    std::cout << "What is your name?" << std::endl;
    std::cin >> str; // keyboard input is stored into str
    std::cout << "Hello, " << str << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
