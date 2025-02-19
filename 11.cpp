#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;
    while(number % 3 == 0){
        number /= 3;
    }
    if(number == 1){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
