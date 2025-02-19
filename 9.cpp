// Write a C++ program to find the third largest string in a given array of strings.

#include <iostream>
#include <string>
using namespace std;

void findThirdLargestString(string arr[], int n)
{
    string firstLargest = "", secondLargest = "", thirdLargest = "";

    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() > firstLargest.length())
        {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i].length() > secondLargest.length())
        {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        }
        else if (arr[i].length() > thirdLargest.length())
            thirdLargest = arr[i];
    }

    cout << "The third largest string is " << thirdLargest;
}

int main()
{
    string arr[] = {"apple", "banana", "mango", "kiwi", "grapes"};
    int n = sizeof(arr) / sizeof(arr[0]);

    findThirdLargestString(arr, n);

    return 0;
}
