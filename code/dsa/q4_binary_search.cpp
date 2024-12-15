#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key){
    if(right>=left){
        int mid = left + (right - left)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(key < arr[mid]){
            return binarySearch(arr, left, mid-1, key);
        }
        return binarySearch(arr, mid+1, right, key);
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5,7, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, size-1, 3);
    if(result==-1){
        cout<<"Key Not Found!"<<endl;
    }
    else{
        cout<<"Key found at Index :"<<result<<endl;
    }
return 0;
}