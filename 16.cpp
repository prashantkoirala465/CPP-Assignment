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
    cout << "After ones complement the number = " << binary << endl;
    return 0;
}
