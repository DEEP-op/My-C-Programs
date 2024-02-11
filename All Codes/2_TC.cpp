#include <iostream>

using namespace std;

int main() {
    try {
        // Get input for numerator and denominator
        cout << "Enter the numerator: ";
        double numerator;
        cin >> numerator;

        cout << "Enter the denominator: ";
        double denominator;
        cin >> denominator;

        // Check for division by zero
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is undefined.");
        }

        // Perform the division and display the result
        double result = numerator / denominator;
        cout << "Result of division: " << result << endl;
    } catch (const exception& e) {
        // Handle exceptions
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
