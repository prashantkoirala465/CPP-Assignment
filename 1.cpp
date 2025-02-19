// Write a C++ program to find the largest three elements in an array.

#include <iostream>
#include <climits>
using namespace std;

void findLargestThree(int arr[], int size) {
    if (size < 3) {
        cout << "Array should have at least 3 elements." << endl;
        return;
    }
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: ";
    cout << first << " " << second << " " << third << endl;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findLargestThree(arr, size);

    return 0;
}
