// Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.

#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;
}

int main()
{
    int arr[] = {2, 3, 3, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    cout << "The number of occurrences of " << x << " is " << countOccurrences(arr, n, x);
    return 0;
}
