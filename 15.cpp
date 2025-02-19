#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;
    cout << "The factors are: ";
    for(int i = 1; i <= number; i++){
        if(number % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
