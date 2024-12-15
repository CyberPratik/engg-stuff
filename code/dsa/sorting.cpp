#include <iostream>
using namespace std;

void bubbleSort(string arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectSort(string arr[], int size){
    for(int i=0;i<size-1;i++){
        int minIdx = i;
        for(int j=i+1; j<size;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx!=i){
            swap(arr[minIdx], arr[i]);
        }
    }
}

int partition(string arr[], int low, int high){
    string pivot = arr[high];
    int i = low - 1;
    for(int j=low; j<high;j++){
        if(arr[j] < pivot){
            swap(arr[j], arr[++i]);
        }
    }
    swap(arr[high], arr[i+1]);
    return i+1;
}

void quickSort(string arr[], int low, int high){
    if(low<high){
        int partIndx = partition(arr, low, high);
        quickSort(arr, low, partIndx-1);
        quickSort(arr, partIndx+1, high);
    }
}

void insertSort(string arr[], int size){
    for(int i=1;i<size;i++){
        int j = i - 1;
        while(j>=0 && arr[j] > arr[i]){
            swap(arr[j], arr[j+1]);
            j--;
        }
        swap(arr[j+1], arr[i]);
    }
}

void display(string arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
}


int main(){
const int MAX = 20;
string names[MAX];
cout<<"Enter No. of Students: ";
int n;
cin>>n;
cout<<"Enter Names of Students: ";
cin.ignore();
for(int i=0;i<n;i++){
getline(cin, names[i]);
}
cout<<"Before: "<<endl;
display(names, n);
cout<<"After: "<<endl;
//bubbleSort(names, n);
//quickSort(names, 0, n-1);
//insertSort(names, n);
selectSort(names, n);
display(names, n);
return 0;
}