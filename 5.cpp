// Write a C++ program to make such a pattern, like a pyramid, with a repeating number.
// Sample Output:
// Input number of rows: 5
//             1
//            2 2
//           3 3 3
//          4 4 4 4
//         5 5 5 5 5

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
