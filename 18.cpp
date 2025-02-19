#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    string binary = "";
    while(decimal != 0){
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    cout << "The binary number is: " << binary << endl;
    return 0;
}
