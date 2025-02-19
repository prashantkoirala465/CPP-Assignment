// Write a C++ program to find the k largest elements in a given array of integers.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void findKLargestElements(int arr[], int n, int k) {
    if (k > n) {
        cout << "k cannot be greater than the size of the array." << endl;
        return;
    }

    // Min-heap to store the k largest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Add elements to the min-heap
    for (int i = 0; i < n; i++) {
        // If heap has less than k elements, add the current element
        if (minHeap.size() < k) {
            minHeap.push(arr[i]);
        } else {
            // If heap has k elements, replace the smallest one if current element is larger
            if (arr[i] > minHeap.top()) {
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
    }

    // Print the k largest elements
    cout << "The " << k << " largest elements are: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  // Number of largest elements to find

    findKLargestElements(arr, n, k);

    return 0;
}
