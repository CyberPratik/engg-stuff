#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList{
    private:
    Node* head;
    Node* tail;

    public:
    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void append(int value){
        Node* nn = new Node(value);
        if(!head){
            head = tail = nn;
        }
        else{
            tail->next = nn;
            nn->prev = tail;
            tail = nn;
        }
        cout<<"Append: "<<value<<endl;
    }
    void prepend(int value){
        Node* nn = new Node(value);
        if(!head){
            head = tail = nn;
        }
        else{
            head->prev = nn;
            nn->next = head;
            head = nn;
        }
        cout<<"Prepend: "<<value<<endl;
    }

    void displayForward(){
        Node* temp = head;
        cout<<"Linked List: ";
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void displayBackward(){
        Node* temp = tail;
        cout<<"Linked List: ";
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};


int main(){
DoublyLinkedList dll;
dll.append(1);
dll.append(2);
dll.prepend(3);
dll.prepend(4);
dll.displayForward();
dll.displayBackward();
return 0;
}