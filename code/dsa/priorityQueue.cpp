#include <iostream>
using namespace std;

class Node{
public:
    int data;
    int priority;
    Node* next;

    Node(int data, int priority){
        this->data = data;
        this->priority = priority;
        this->next = nullptr;
    }
};

class PriorityQueue{
    private:
    Node* front;

    public:
    PriorityQueue(){
        front = nullptr;
    }

    bool isEmpty(){
        return front == nullptr;
    }

    void enqueue(int data, int priority){
        Node* nn = new Node(data, priority);
        if(front == nullptr || priority < front->priority){
            nn->next = front;
            front = nn;
        }
        else{
        Node* temp = front;
        while(temp->next!=nullptr && temp->next->priority <= priority){
            temp=temp->next;
        }
        nn->next = temp->next;
        temp->next = nn;
        }
        cout<<"Inserted Element: "<<data<<" with priority: "<<priority<<endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        Node* temp = front;
        cout<<"Dequeued data: "<<temp->data<<" priority: "<<temp->priority<<endl;
        front = front->next;
        delete temp;
    }

    void display(){
        Node* temp = front;
        cout<<"Priority Queue"<<endl;
        while(temp!=nullptr){
            cout<<"Enqueued data: "<<temp->data<<" priority: "<<temp->priority<<endl;
            temp=temp->next;
        }
    }
};


int main(){
PriorityQueue pq;
pq.enqueue(100, 1);
pq.enqueue(200, 3);
pq.enqueue(300, 2);
pq.enqueue(600, 0);
pq.display();
pq.dequeue();
pq.display();
return 0;
}