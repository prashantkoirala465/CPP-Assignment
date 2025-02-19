// Write a C++ program to capitalize the first letter of each word in a given string.
// Words must be separated by only one space.
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Capitalized string: ";
    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            cout << (char)toupper(str[i]);
        } else {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}
