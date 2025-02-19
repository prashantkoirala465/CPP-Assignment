#include <iostream>
using namespace std;

int main(){
    cout << "Numbers between 100 and 200, divisible by 9:" << endl;
    int sum = 0;
    for(int i = 100; i <= 200; i++){
        if(i % 9 == 0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl << "The sum: " << sum << endl;
    return 0;
}
