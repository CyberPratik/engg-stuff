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

    void append(int data){
        if(!head){
            head = new Node(data);
            return;
        }
        Node* t = head;
        while(t->next){
            t = t->next;
        }
        t->next = new Node(data);
    }
    
    void display(){
        Node* t = head;
        cout<<"Linked List: ";
        while(t){
            cout<<t->data<<" ";
            t = t->next;
        }
        cout<<endl;
    }
};

bool isPrime(int num){
    for(int i=2;i<(num/2);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
LinkedList ll;
for(int i=1;i<500; i++){
    if(isPrime(i)){
        ll.append(i);
    }
}
ll.display();
return 0;
}