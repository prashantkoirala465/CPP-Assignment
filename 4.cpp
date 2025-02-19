// Write a C++ program to check if a given string is a Palindrome or not.
// A palindrome is a word, number, phrase, or other sequence of characters which
// reads the same backward as forward, such as madam, racecar.
// Example:
// Sample Input: madam
// Sample Output: True

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
