// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    // Very similar to cin operation
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){ // Will iterate as long as the end of the file is not reached.
            getline(inFile, str); // in string header file; get one line of text
            std::cout << str << ", ";
            getline(inFile, str);
            number = stoi(str); // convert string to integer, in string header
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            std::cout << letter << std::endl;
        }
        inFile.close(); // Must close it
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
