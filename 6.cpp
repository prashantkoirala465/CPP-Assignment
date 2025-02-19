#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, sum = 0, digits = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum = a + b;
    int temp = sum;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    cout << "The sum of the two numbers is: " << sum << endl;
    cout << "The number of digits in the sum is: " << digits << endl;
    return 0;
}
