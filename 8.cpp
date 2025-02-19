// Write a C++ program to find the second lowest and highest numbers in a given array.

#include <iostream>
#include <climits>
using namespace std;

void findSecondLowestAndHighest(int arr[], int n)
{
    int firstLowest = INT_MAX, secondLowest = INT_MAX;
    int firstHighest = INT_MIN, secondHighest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < firstLowest)
        {
            secondLowest = firstLowest;
            firstLowest = arr[i];
        }
        else if (arr[i] < secondLowest && arr[i] != firstLowest)
            secondLowest = arr[i];

        if (arr[i] > firstHighest)
        {
            secondHighest = firstHighest;
            firstHighest = arr[i];
        }
        else if (arr[i] > secondHighest && arr[i] != firstHighest)
            secondHighest = arr[i];
    }

    cout << "The second lowest number is " << secondLowest << endl;
    cout << "The second highest number is " << secondHighest << endl;
}

int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLowestAndHighest(arr, n);

    return 0;
}
