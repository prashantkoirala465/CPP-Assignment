// Write a program in C++ to display the pyramid pattern using the alphabet.
// Sample Output:
// Input the number of Letters (less than 26) in the Pyramid: 5
// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    if (n > 26) {
        cout << "Please enter a number less than or equal to 26." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << char('A' + j) << " ";
        }
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
