#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input the number of terms: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Number is: " << i << " and the cube of " << i << " is: " << i * i * i << endl;
    }
    return 0;
}
