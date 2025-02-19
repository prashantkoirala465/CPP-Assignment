// Write a C++ program to reverse a string using recursion.
#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &s) {
    if (s.empty()) return s;
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
