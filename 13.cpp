#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    for(int i = 2; i < n; i++){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            count++;
        }
    }
    cout << "Number of prime numbers less than " << n << " is: " << count << endl;
    return 0;
}
