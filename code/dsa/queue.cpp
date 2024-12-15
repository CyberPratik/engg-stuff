#include <iostream>
using namespace std;

class Queue{
public:
int *arr;
int front;
int rear;
int size;
int capacity;

Queue(int maxSize){
    capacity = maxSize;
    front = 0;
    rear = -1;
    size = 0;
    arr = new int[capacity];
}

bool isFull(){
    return size==capacity;
}

bool isEmpty(){
    return size==0;
}
int getSize(){
    return size;
}
void enqueue(int value){
    if(isFull()){
        cout<<"Queue Overflow"<<endl;
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear]= value;
    size++;
    cout<<"Enqueued: "<<arr[rear]<<endl;
}

void dequeue(){
    if(isEmpty()){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    cout<<"Dequeued: "<<arr[front]<<endl;
    front = (front + 1) % capacity;
    size--;
}

void display(){
    if(isEmpty()){
        cout<<"Empty Queue"<<endl;
        return;
    }
    cout<<"Queue: ";
    for(int i=0;i<size;i++){
        cout<<arr[(front + i) % capacity]<<" ";
    }
    cout<<endl;
}
};




int main(){
Queue q(5);
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.dequeue();
q.dequeue();

q.enqueue(90);
q.enqueue(100);
q.enqueue(200);
q.enqueue(300);
q.enqueue(400);
cout<<"Size: "<<q.getSize()<<endl;
q.display();
return 0;
}