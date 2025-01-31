#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find the first element that appears exactly k times
int firstElementKTimes(const vector<int>& arr, int k) {
    unordered_map<int, int> freq;

    // First pass: Count the frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    // Second pass: Find the first element that appears exactly k times
    for (int num : arr) {
        if (freq[num] == k) {
            return num;
        }
    }

    return -1; // No element appears exactly k times
}

int main() {
    int n, k;
    
    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input the value of k
    cout << "Enter the value of k: ";
    cin >> k;

    // Get the result
    int result = firstElementKTimes(arr, k);

    // Output the result
    if (result == -1) {
        cout << "No element appears exactly " << k << " times." << endl;
    } else {
        cout << "The first element to appear exactly " << k << " times is: " << result << endl;
    }

    return 0;
}
