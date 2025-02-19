// Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 5, 0, 3, 1, 7};
    vector<int> result;

    for (size_t i = 1; i + 1 < v.size(); i++) {
        if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
            result.push_back(v[i]);
        }
    }

    cout << "Elements strictly smaller than their adjacent neighbours:" << endl;
    for (auto &x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
