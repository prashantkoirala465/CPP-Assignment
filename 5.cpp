#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end(), greater<int>());
    cout << "The three highest numbers are: ";
    for(int i = 0; i < 3; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
