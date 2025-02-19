// Write a C++ program that displays the pattern with the highest columns in the first
// row and digits with the right justified digits.
// Sample Output:
// Input number of rows: 5
// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= (rows - i); j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
