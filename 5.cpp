#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input the upperlimit: ";
    cin >> n;
    cout << "The non-prime numbers are:" << endl;
    for(int i = 2; i <= n; i++){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(!isPrime){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
