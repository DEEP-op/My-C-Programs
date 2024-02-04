
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin,str);

  // Find the middle character of the string
  int middleIndex = str.length() / 2;
  char middleChar = str[middleIndex];

  // Copy the middle character to the whole string
  for (int i = 0; i < str.length(); i++) {
    str[i] = middleChar;
  }

  // Print the new string
  cout << "The new string is: " << str << endl;

  return 0;
}






// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//   string str;
//   cout << "Enter a string: ";
//   getline(cin,str);

//   // Split the string into words
//   vector<string> words;
//   string word = "";
//   for (int i = 0; i < str.length(); i++) {
//     if (str[i] != ' ') {
//       word += str[i];
//     } else {
//       if (word != "") {
//         words.push_back(word);
//       }
//       word = "";
//     }
//   }
//   if (word != "") {
//     words.push_back(word);
//   }

//   // Find the middle word of the string
//   int middleIndex = words.size() / 2;
//   string middleWord = words[middleIndex];

//   // Copy the middle word to the whole string
//   for (int i = 0; i < words.size(); i++) {
//     words[i] = middleWord;
//   }

//   // Join the words back into a string
//   string newStr = "";
//   for (int i = 0; i < words.size(); i++) {
//     newStr += words[i];
//     if (i != words.size() - 1) {
//       newStr += " ";
//     }
//   }

//   // Print the new string
//   cout << "The new string is: " << newStr << endl;

//   return 0;
// }
