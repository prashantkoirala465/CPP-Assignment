#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;
    int product = 1;
    while(number != 0){
        product *= number % 10;
        number /= 10;
    }
    cout << "The product of the digits of the number is: " << product << endl;
    return 0;
}
