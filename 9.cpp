#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Input a number: ";
    cin >> n;
    int reversed = 0;
    while(n != 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    cout << "The number in reverse order is: " << reversed << endl;
    return 0;
}
