// Write a C++ program to reverse a given string.
// Example:
// Sample Input: helloworld
// Sample Output: dlrowolleh

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
