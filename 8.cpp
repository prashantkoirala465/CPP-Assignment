// Write a C++ program to print a pattern in which the highest number of columns appears in the first row.
// Sample Output:
// Input the number of rows: 5
// 12345
// 2345
// 345
// 45
// 5

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j <= rows; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
