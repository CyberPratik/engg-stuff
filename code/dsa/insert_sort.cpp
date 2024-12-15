#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void insertSort(int arr[], int size){
    for(int i=0;i<size;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
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
insertSort(arr, size);
cout<<"After: "<<endl;
display(arr, size);
return 0;
}