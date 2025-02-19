#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    string hexadecimal = "";
    while(decimal != 0){
        int remainder = decimal % 16;
        if(remainder < 10){
            hexadecimal = to_string(remainder) + hexadecimal;
        } else {
            hexadecimal = (char)(remainder + 55) + hexadecimal;
        }
        decimal /= 16;
    }
    cout << "The hexadecimal number is: " << hexadecimal << endl;
    return 0;
}
