#include <iostream>

using namespace std;

class Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;

    // Virtual destructor (important for polymorphism and avoiding memory leaks)
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    // Constructor for Circle
    Circle(double r) : radius(r) {}

    // Implementation of the virtual function for calculating the area of a circle
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor for Rectangle
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the virtual function for calculating the area of a rectangle
    double area() const override {
        return length * width;
    }
};

int main() {
    // Example usage of the classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Calculate and display the area of the circle
    cout << "Area of the circle: " << circle.area() << endl;

    // Calculate and display the area of the rectangle
    cout << "Area of the rectangle: " << rectangle.area() << endl;

    return 0;
}
