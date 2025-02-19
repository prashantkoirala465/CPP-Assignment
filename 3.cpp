// Write a C++ program to implement a recursive function to get the nth Fibonacci number.
#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << n << "th Fibonacci number is " << fibonacci(n) << endl;
    return 0;
}
