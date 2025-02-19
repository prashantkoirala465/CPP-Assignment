#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Input number of terms: ";
    cin >> n;
    int sum = 0;
    int term = 0;
    for(int i = 0; i < n; i++){
        term = term * 10 + 1;
        sum += term;
        cout << term;
        if(i < n - 1){
            cout << " + ";
        }
    }
    cout << endl << "The sum of the series is: " << sum << endl;
    return 0;
}
