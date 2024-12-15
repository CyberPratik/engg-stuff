#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
int arr[] = {2, 4, 3, 5, 9, 7, 8, 1};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<"Before: "<<endl;
display(arr, size);
bubbleSort(arr, size);
cout<<"After: "<<endl;
display(arr, size);
return 0;
}