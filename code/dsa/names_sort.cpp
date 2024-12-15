#include <iostream>
#include <string>
using namespace std;

// Bubble Sort
void bubbleSort(string names[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (names[j] < names[j + 1]) { // Reverse order comparison
                swap(names[j], names[j + 1]);
            }
        }
    }
}

// Insertion Sort
void insertionSort(string names[], int n) {
    for (int i = 1; i < n; ++i) {
        string key = names[i];
        int j = i - 1;
        while (j >= 0 && names[j] < key) { // Reverse order comparison
            names[j + 1] = names[j];
            --j;
        }
        names[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(string names[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (names[j] > names[maxIdx]) { // Reverse order comparison
                maxIdx = j;
            }
        }
        swap(names[i], names[maxIdx]);
    }
}

// Merge Sort Helper Functions
void merge(string names[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    string* leftArr = new string[n1];
    string* rightArr = new string[n2];

    for (int i = 0; i < n1; ++i) leftArr[i] = names[left + i];
    for (int i = 0; i < n2; ++i) rightArr[i] = names[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] >= rightArr[j]) { // Reverse order comparison
            names[k++] = leftArr[i++];
        } else {
            names[k++] = rightArr[j++];
        }
    }

    while (i < n1) names[k++] = leftArr[i++];
    while (j < n2) names[k++] = rightArr[j++];

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(string names[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(names, left, mid);
        mergeSort(names, mid + 1, right);
        merge(names, left, mid, right);
    }
}

// Quick Sort Helper Functions
int partition(string names[], int low, int high) {
    string pivot = names[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (names[j] >= pivot) { // Reverse order comparison
            swap(names[++i], names[j]);
        }
    }
    swap(names[i + 1], names[high]);
    return i + 1;
}

void quickSort(string names[], int low, int high) {
    if (low < high) {
        int pi = partition(names, low, high);
        quickSort(names, low, pi - 1);
        quickSort(names, pi + 1, high);
    }
}

// Display Function
void displayNames(string names[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << names[i] << endl;
    }
}

int main() {
    const int MAX_STUDENTS = 100;
    string names[MAX_STUDENTS];
    int n;

    // Input student names
    cout << "Enter the number of students: ";
    cin >> n;
    if (n > MAX_STUDENTS) {
        cout << "Error: Maximum number of students is " << MAX_STUDENTS << endl;
        return 1;
    }

    cout << "Enter the names of students:" << endl;
    cin.ignore(); // Clear input buffer
    for (int i = 0; i < n; ++i) {
        getline(cin, names[i]);
    }

    // Choose sorting algorithm
    cout << "Choose sorting algorithm:\n";
    cout << "1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Merge Sort\n5. Quick Sort\nEnter your choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(names, n);
            cout << "\nNames sorted in reverse order (Bubble Sort):\n";
            displayNames(names, n);
            break;

        case 2:
            insertionSort(names, n);
            cout << "\nNames sorted in reverse order (Insertion Sort):\n";
            displayNames(names, n);
            break;

        case 3:
            selectionSort(names, n);
            cout << "\nNames sorted in reverse order (Selection Sort):\n";
            displayNames(names, n);
            break;

        case 4:
            mergeSort(names, 0, n - 1);
            cout << "\nNames sorted in reverse order (Merge Sort):\n";
            displayNames(names, n);
            break;

        case 5:
            quickSort(names, 0, n - 1);
            cout << "\nNames sorted in reverse order (Quick Sort):\n";
            displayNames(names, n);
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
