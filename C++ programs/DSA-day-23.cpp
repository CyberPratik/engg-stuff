#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> slidingWindowMaximum(vector<int>& arr, int k) {
    // Priority queue to store pairs of (element, index) and sort by element
    priority_queue<pair<int, int>> maxHeap;
    vector<int> result;

    // Build the initial window
    for (int i = 0; i < k; i++) {
        maxHeap.push({arr[i], i});
    }

    // Add the max of the first window
    result.push_back(maxHeap.top().first);

    // Slide the window from left to right
    for (int i = k; i < arr.size(); i++) {
        // Add the new element to the heap
        maxHeap.push({arr[i], i});

        // Remove elements that are out of the current window
        while (maxHeap.top().second <= i - k) {
            maxHeap.pop();
        }

        // The top of the heap is the maximum for the current window
        result.push_back(maxHeap.top().first);
    }

    return result;
}

int main() {
    int n, k;
    
    // Input size of array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Input window size k
    cout << "Enter the window size (k): ";
    cin >> k;

    // Get the result
    vector<int> result = slidingWindowMaximum(arr, k);

    // Output the result
    cout << "Sliding window maximums: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
