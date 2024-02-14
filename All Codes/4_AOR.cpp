#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Parameterized constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Member function to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    // Example usage of the Rectangle class
    double userLength, userWidth;

    // Get user input for length and width
    cout << "Enter the length of the rectangle: ";
    cin >> userLength;

    cout << "Enter the width of the rectangle: ";
    cin >> userWidth;

    // Create an instance of the Rectangle class with the user-provided values
    Rectangle myRectangle(userLength, userWidth);

    // Calculate and display the area of the rectangle
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    return 0;
}
