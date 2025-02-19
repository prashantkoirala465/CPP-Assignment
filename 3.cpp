// Write a C++ program to find the largest word in a given string.
// Example:
// Sample Input: C++ is a general-purpose programming language.
// Sample Output: programming

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string largestWord = "";
    string currentWord = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (currentWord.length() > largestWord.length()) {
                largestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += str[i];
        }
    }
    if (currentWord.length() > largestWord.length()) {
        largestWord = currentWord;
    }
    cout << "Largest word: " << largestWord << endl;
    return 0;
}
