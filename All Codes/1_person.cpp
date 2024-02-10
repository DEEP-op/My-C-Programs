#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() : name("Unknown"), age(0) {}

    // Member function to display person's information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating an instance of the Person class
    Person person1;

    // Displaying information using the member function
    person1.displayInfo();

    return 0;
}
