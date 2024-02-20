#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    // Get input string
    cout << "Enter a string (press Ctrl+Z and Enter to finish input on Windows, or Ctrl+D on Linux/Mac):" << endl;

    string input;
    getline(cin, input);

    // Count characters
    int charCount = input.length();

    // Count words
    stringstream ss(input);
    string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    // Count lines
    int lineCount = 1;  // At least one line even if the string is empty

    for (char ch : input) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    // Display results
    cout << "\nCharacter count: " << charCount << endl;
    cout << "Word count: " << wordCount << endl;
    cout << "Line count: " << lineCount << endl;

    return 0;
}
