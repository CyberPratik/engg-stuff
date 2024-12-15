#include <bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
//Constructor
Node(int value){
    data = value;
    next = nullptr;
}
};

class LinkedList{
    public:
    Node* head;
    public:
    //Constructor
    LinkedList(){
        head = nullptr;
    }
    void insertAtEnd(int data){
        if(head==nullptr){
            head = new Node(data);
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next = new Node(data);
    }

    void insertAtStart(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void search(int key){
        Node* temp = head;
        while(temp->next!=nullptr){
            if(temp->data == key){
                cout<<"Key Found"<<endl;
                return;
            }
            temp = temp->next;
        }
        cout<<"Not Found"<<endl;
    }

    void deleteEnd(){
        if (head==nullptr){
            cout<<"Nothing to Delete"<<endl;
            return;
        }
        if (head->next == nullptr){
            head = nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
        temp->next = nullptr;
        delete temp->next;
    }
    void display(){
        if (head==nullptr){
            cout<<"Linked List is Empty";
        }
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
LinkedList LL;
LL.insertAtEnd(1);
LL.insertAtEnd(2);
LL.insertAtStart(69);
LL.search(58);
LL.search(69);
LL.deleteEnd();
LL.deleteEnd();
LL.deleteEnd();
LL.display();
LL.deleteEnd();
return 0;
}