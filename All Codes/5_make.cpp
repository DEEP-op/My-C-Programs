#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    // Parameterized constructor for Vehicle
    Vehicle(string make, string model, int year) : make(make), model(model), year(year) {}

    // Method to display vehicle information
    void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    int numDoors;

public:
    // Parameterized constructor for Car
    Car(string make, string model, int year, int doors) : Vehicle(make, model, year), numDoors(doors) {}

    // Method to display car information
    void displayInfo() const {
        cout << "Car - ";
        Vehicle::displayInfo();
        cout << "Number of Doors: " << numDoors << endl;
    }
};

// Derived class Truck
class Truck : public Vehicle {
private:
    int payloadCapacity;

public:
    // Parameterized constructor for Truck
    Truck(string make, string model, int year, int payload) : Vehicle(make, model, year), payloadCapacity(payload) {}

    // Method to display truck information
    void displayInfo() const {
        cout << "Truck - ";
        Vehicle::displayInfo();
        cout << "Payload Capacity: " << payloadCapacity << " pounds" << endl;
    }
};

int main() {
    // Example usage of the classes
    Car myCar("Toyota", "Camry", 2022, 4);
    Truck myTruck("Ford", "F-150", 2022, 2000);

    // Display information for the car and truck
    myCar.displayInfo();
    cout << endl;
    myTruck.displayInfo();

    return 0;
}
