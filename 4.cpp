// Write a C++ program to find the smallest element missing from a sorted array.

#include <iostream>
using namespace std;

int findSmallestMissingElement(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] != mid)
        {
            if (mid == 0 || arr[mid - 1] == mid - 1)
                return mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {0, 1, 2, 6, 9, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest missing element is " << findSmallestMissingElement(arr, n);
    return 0;
}
