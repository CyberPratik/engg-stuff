#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* head;
    Node* tail; // Pointer to the last node for efficient push
    int size;   // Maximum size of the stack
    int count;  // Current size of the stack

public:
    Stack(int maxSize = 6) {
        head = nullptr;
        tail = nullptr;
        size = maxSize;
        count = 0;
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count >= size;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }

        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode; // Initialize both head and tail
        } else {
            tail->next = newNode; // Append at the end
            tail = newNode;       // Update tail
        }
        count++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }

        if (head == tail) {
            // Only one node in the stack
            delete head;
            head = tail = nullptr;
        } else {
            // Traverse to the second-to-last node
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }

            delete tail;         // Delete the last node
            tail = temp;         // Update tail
            tail->next = nullptr; // Remove link to the old last node
        }
        count--;
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack: ";
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void stackSize() const {
        cout << "Current size: " << count << " / " << size << endl;
    }
};

int main() {
    Stack st;

    // Test operations
    st.pop(); // Should display "Stack Underflow"
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7); // Should display "Stack Overflow"

    st.display();
    st.stackSize();

    st.pop();
    st.display();
    st.stackSize();

    return 0;
}
