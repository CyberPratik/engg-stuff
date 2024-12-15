#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1; // Size of the left subarray
    int n2 = high - mid;    // Size of the right subarray

    // Create temporary arrays
    int leftArr[n1], rightArr[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge the temp arrays back into arr[low...high]
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    // Copy remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k++] = leftArr[i++];
    }

    // Copy remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 4, 3, 5, 9, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:" << endl;
    display(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "After sorting:" << endl;
    display(arr, size);

    return 0;
}
