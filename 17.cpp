#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string binary;
    cout << "Input a 8 bit binary value: ";
    cin >> binary;
    cout << "The original binary = " << binary << endl;
    for(int i = 0; i < binary.length(); i++){
        if(binary[i] == '0'){
            binary[i] = '1';
        } else {
            binary[i] = '0';
        }
    }
    cout << "After ones complement the value = " << binary << endl;
    int carry = 1;
    for(int i = binary.length() - 1; i >= 0; i--){
        if(binary[i] == '1' && carry == 1){
            binary[i] = '0';
        } else if(binary[i] == '0' && carry == 1){
            binary[i] = '1';
            carry = 0;
        }
    }
    cout << "After twos complement the value = " << binary << endl;
    return 0;
}
