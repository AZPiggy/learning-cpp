// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

// Class is by default private. So main function cannot access its members. 
// Data are better to be private. Functions can be public. 
class cow
{
// write constructor, setters and getters
public:
    // constructor (called when an object is created)
    cow(std::string name_i, int age_i, cow_purpose purpose_i)
    {
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    // getters
    std::string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    // setters
    void set_age(int new_age)
    {
        age = new_age;
    }
    void set_name(std::string new_name)
    {
        name = new_name;
    }
    void set_purpose(cow_purpose new_purpose)
    {
        purpose = new_purpose;
    }

private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
