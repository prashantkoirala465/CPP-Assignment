// Write a C++ program that takes a vector of strings and returns only those strings that contain a number(s).
#include <iostream>
#include <vector>
using namespace std;

bool containsDigit(const string &s) {
    for (char c : s) {
        if (isdigit(c)) return true;
    }
    return false;
}

int main() {
    vector<string> vec = {"red", "green23", "1black", "white"};
    vector<string> result;

    for (auto &str : vec) {
        if (containsDigit(str)) {
            result.push_back(str);
        }
    }

    cout << "Strings that contain a number(s):" << endl;
    for (auto &r : result) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}
