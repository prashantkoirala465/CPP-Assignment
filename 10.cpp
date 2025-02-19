#include <iostream>
using namespace std;

int main(){
    int start, n, diff;
    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> n;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;
    cout << "The Sum of the A.P. series are :" << endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cout << start + i * diff;
        sum += start + i * diff;
        if(i < n - 1){
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;
    return 0;
}
