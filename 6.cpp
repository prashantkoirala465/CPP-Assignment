// Write a C++ program to find the two repeating elements in a given array of integers.

#include <iostream>
using namespace std;

void findRepeatingElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i])] > 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}

int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findRepeatingElements(arr, n);

    return 0;
}
