// Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
