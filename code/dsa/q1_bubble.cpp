#include <iostream>
#include <string>
using namespace std;

//reverse string using bubble sort
void bubbleSort(string &str, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if((int)str[j] < (int)str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
string name = "chavan";
int size = name.length();
cout<<"Before: "<<name<<endl;
bubbleSort(name, size);
cout<<"After: "<<name<<endl;
return 0;
}