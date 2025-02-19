#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Here is the Fibonacci series upto to " << n << " terms:" << endl;
    cout << a << " ";
    for(int i = 1; i < n; i++){
        cout << b << " ";
        int temp = b;
        b += a;
        a = temp;
    }
    cout << endl;
    return 0;
}
