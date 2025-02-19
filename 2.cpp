// Write a C++ program to capitalize the first character of each element of a given string vector.
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    vector<string> colors = {"red", "green", "black", "white", "Pink"};

    for (auto &word : colors) {
        if (!word.empty()) {
            word[0] = toupper(word[0]);
        }
    }

    cout << "Capitalized Vector:" << endl;
    for (auto &w : colors) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
