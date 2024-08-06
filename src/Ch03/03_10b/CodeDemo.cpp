// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "The second cow is " << cattle[1].get_name() << std::endl; // an object, not iterator
    std::cout << "The third cow is " << prev(cattle.end(),2)->get_name() << std::endl;
    std::cout << "The fourth cow is " << (cattle.end()-1)->get_name() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
