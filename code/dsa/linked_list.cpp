#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

public:
Node(int data1,Node* next1){
    data = data1;
    next = next1;
}
public:
Node(int data1){
    data = data1;
    next = nullptr;
}
};

Node* convertToLL(int arr[], int &size){
    if (size == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<size;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void insertLL(Node* &head, int data){
    if (head==nullptr){
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new Node(data);
}

void deleteLL(Node* &head){
    if(head == nullptr){
        cout << "Linked List is Empty"<<endl;
        return;
    }
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void printLL(Node* head){
cout<<"Linked List: ";
while(head != nullptr){
    cout<<head->data<<" ";
    head = head->next;
}
cout<<endl;
}

void searchLL(Node* head, int key){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == key){
            cout<<"Key Found"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not Found"<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = convertToLL(arr, size);
    insertLL(head, 69);
    insertLL(head, 36);
    deleteLL(head);
    deleteLL(head);
    searchLL(head, 2);
    searchLL(head, 444);
    printLL(head);
}