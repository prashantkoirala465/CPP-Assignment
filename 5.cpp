// Write a C++ program to implement a recursive function to check if a given string is a palindrome.
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s, int start, int end) {
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool result = isPalindrome(str, 0, str.size() - 1);
    cout << boolalpha << result << endl;

    return 0;
}
