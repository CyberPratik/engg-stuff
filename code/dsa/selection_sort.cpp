#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int size){
    int min;
    for(int i=0;i<size-1;i++){
        min = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
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
selectionSort(arr, size);
cout<<"After: "<<endl;
display(arr, size);
return 0;
}