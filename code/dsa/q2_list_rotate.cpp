#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head = nullptr;
    }

    void insert(int data){
        Node* nn = new Node(data);
        if(!head){
            head = nn;
            return;
        }
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = nn;
    }
    void display(){
        if(!head){
            cout<<"Empty Linked List!"<<endl;
            return;
        } 
        Node* temp = head;
        cout<<"Linked List: ";
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void rotateRight(int k){
        if(!head || k==0){
            cout<<"Cannot rotate Empty list"<<endl;
            return;
        }

        int length = 1;
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
            length++;
        }

        //making LL circular
        temp->next = head;
        k = k % length;

        int stop = length - k;
        Node* newTail = head;
        for(int i=1;i<stop;i++){
            newTail = newTail->next;
        }

        head = newTail->next;
        newTail->next = nullptr;
    }
    void rotateLeft(int k) {
        if (!head || k == 0) return;

        // Step 1: Calculate the length of the list
        Node* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        // Step 2: Normalize k
        k = k % length;
        if (k == 0) return; // No rotation needed

        // Step 3: Traverse to the k-th node
        Node* newTail = head;
        for (int i = 1; i < k; ++i) {
            newTail = newTail->next;
        }

        // Step 4: Update the head and adjust pointers
        Node* newHead = newTail->next;
        newTail->next = nullptr;
        temp->next = head; // Connect last node to the original head
        head = newHead;    // Update head to the new head
    }
};


int main(){
LinkedList ll;
ll.insert(1);
ll.insert(2);
ll.insert(3);
ll.insert(4);
ll.rotateLeft(2);
ll.rotateRight(1);
ll.display();
return 0;
}