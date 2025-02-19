// Write a C++ program to implement a recursive function to find the sum of all prime numbers in a given range.
#include <iostream>
using namespace std;

bool isPrime(int num, int i = 2) {
    if (num < 2) return false;
    if (i * i > num) return true;
    if (num % i == 0) return false;
    return isPrime(num, i + 1);
}

int sumPrimes(int start, int end) {
    if (start > end) return 0;
    return (isPrime(start) ? start : 0) + sumPrimes(start + 1, end);
}

int main() {
    int s, e;
    cout << "Enter start of range: ";
    cin >> s;
    cout << "Enter end of range: ";
    cin >> e;

    cout << "Sum of prime numbers in the range: " << sumPrimes(s, e) << endl;
    return 0;
}
