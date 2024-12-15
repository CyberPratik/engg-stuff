#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class Queue{
    public:
    Node* front;
    Node* rear;

    Queue(){
        front = rear = nullptr;
    }
    bool isEmpty(){
        return front == nullptr;
    }
    void enqueue(int value){
        Node* temp = new Node(value);
        if(isEmpty()){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if(front == nullptr){
            rear = nullptr;
        }
        delete temp;
    }
    void peek(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Front: "<<front->data<<endl;
    }
    void getRear(){
        cout<<"Rear: "<<rear->data<<endl;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp = front;
        cout<<"Queue: ";
        while(temp!= nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }
};

int main(){
Queue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.dequeue();
q.display();
q.peek();
q.getRear();
return 0;
}