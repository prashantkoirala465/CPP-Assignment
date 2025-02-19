// Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.

#include <iostream>
using namespace std;

void updateArray(int arr[], int n)
{
    if (n <= 1)
        return;

    int prev = arr[0];
    arr[0] = arr[0] * arr[1];

    for (int i = 1; i < n - 1; i++)
    {
        int curr = arr[i];
        arr[i] = prev * arr[i + 1];
        prev = curr;
    }

    arr[n - 1] = prev * arr[n - 1];
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    updateArray(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
