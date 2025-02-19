#include <iostream>
using namespace std;

int main(){
    int number, firstDigit, lastDigit, temp, digits = 0;
    cout << "Enter any number: ";
    cin >> number;
    temp = number;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    firstDigit = number / (int)pow(10, digits - 1);
    lastDigit = number % 10;
    number = number - firstDigit * (int)pow(10, digits - 1) - lastDigit;
    number = number + lastDigit * (int)pow(10, digits - 1) + firstDigit;
    cout << "The number after swapping the first and last digits are: " << number << endl;
    return 0;
}
