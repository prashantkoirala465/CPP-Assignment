#include <iostream>
using namespace std;

int main(){
    int a, b, sum = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        int temp = i;
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
    }
    cout << "The sum of all the digits between " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
