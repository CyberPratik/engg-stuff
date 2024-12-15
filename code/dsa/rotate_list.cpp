#include <iostream>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    void append(int data) {
        if (!head) {
            head = new Node(data);
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }

    void display() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void rotateClockwise(int k) {
        if (!head || k <= 0) return;

        // Step 1: Find the length of the list
        Node* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        // Step 2: Normalize k
        k = k % length;
        if (k == 0) return;

        // Step 3: Make the list circular
        temp->next = head;

        // Step 4: Traverse to the new tail (length - k-th node)
        int stop = length - k;
        Node* newTail = head;
        for (int i = 1; i < stop; ++i) {
            newTail = newTail->next;
        }

        // Step 5: Update head and break the circular link
        head = newTail->next;
        newTail->next = nullptr;
    }

    void rotateAnticlockwise(int k) {
        if (!head || k <= 0) return;

        // Step 1: Find the length of the list
        Node* temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }

        // Step 2: Normalize k
        k = k % length;
        if (k == 0) return;

        // Step 3: Make the list circular
        temp->next = head;

        // Step 4: Traverse to the new tail (k-th node)
        Node* newTail = head;
        for (int i = 1; i < k; ++i) {
            newTail = newTail->next;
        }

        // Step 5: Update head and break the circular link
        head = newTail->next;
        newTail->next = nullptr;
    }
};

int main() {
    SinglyLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "Original List: ";
    list.display();

    cout << "Rotate Clockwise by 2: ";
    list.rotateClockwise(2);
    list.display();

    // Resetting the list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    cout << "Rotate Anticlockwise by 3: ";
    list.rotateAnticlockwise(3);
    list.display();

    return 0;
}
