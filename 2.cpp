// Write a program in C++ to display the pattern like right angle triangle with number.
// Sample Output:
// Input number of rows: 5
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
