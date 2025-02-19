// Write a C++ program to find the first repeating element in an array of integers.

#include <iostream>
#include <unordered_set>
using namespace std;

int findFirstRepeatingElement(int arr[], int n)
{
    unordered_set<int> set;
    int min = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end())
            min = i;
        else
            set.insert(arr[i]);
    }

    if (min != -1)
        return arr[min];
    else
        return -1;
}

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The first repeating element is " << findFirstRepeatingElement(arr, n);
    return 0;
}
