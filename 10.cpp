#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;
    while(number > 9){
        int temp = number;
        int sum = 0;
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        number = sum;
    }
    cout << "The sum of all the digits of the number is: " << number << endl;
    return 0;
}
