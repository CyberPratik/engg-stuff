#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<= pivot && i <= high-1){
            i++;
        }
        while(arr[j]>pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low<=high){
        int partIndex = partition(arr, low, high);
        quickSort(arr, low, partIndex-1);
        quickSort(arr, partIndex+1, high);
    }
}

void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[] = {4, 1, 3, 5, 6, 2, 9};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<"Before: "<<endl;
display(arr, size);
cout<<"After: "<<endl;
quickSort(arr, 0, size-1);
display(arr, size);
return 0;
}