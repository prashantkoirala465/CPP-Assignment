#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 0;
    while(i * i <= n){
        i++;
    }
    cout << "Square root of " << n << " = " << i - 1 << endl;
    return 0;
}
