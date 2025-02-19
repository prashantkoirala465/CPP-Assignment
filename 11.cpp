// Write a C++ program to display the pattern like right angle triangle with right justified digits.
// Sample Output:
// Input number of rows: 5
// 1
// 21
// 321
// 4321
// 54321

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
