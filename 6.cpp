// Write a C++ program to print Floyd's Triangle.
// Sample Output:
// Input number of rows: 5
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main() {
    int rows, num = 1;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num % 2;
            num++;
        }
        cout << endl;
    }

    return 0;
}
