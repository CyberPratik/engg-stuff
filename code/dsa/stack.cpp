#include <iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(){
        top = -1;
        size = 3;
        arr = new int[size];
    }
    ~Stack(){
        delete[] arr;
    }
    void push(int data){
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top] = data;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        return arr[top];
    }
    bool isEmpty(){
        if(top<=-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(top>=size){
            return true;
        }
        else{
            return false;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Empty Stack";
        }
        cout<<"Stack: ";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
Stack st;
st.push(1);
st.push(2);
st.display();
st.pop();
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.display();

return 0;
}