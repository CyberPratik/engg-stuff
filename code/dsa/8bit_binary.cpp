#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int bit;  // stores either 0 or 1
    Node* next;  // pointer to the next node

    // Constructor
    Node(int value) {
        bit = value;
        next = nullptr;
    }
};

// Define the Singly Linked List class
class SinglyLinkedList {
private:
    Node* head;  // pointer to the head of the list

public:
    // Constructor to initialize an empty list
    SinglyLinkedList() {
        head = nullptr;
    }

    // Function to insert a bit (0 or 1) at the end of the list
    void insert(int bit) {
        Node* newNode = new Node(bit);
        if (head == nullptr) {
            head = newNode;  // If the list is empty, make this the head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;  // Traverse to the last node
            }
            temp->next = newNode;  // Insert the new node at the end
        }
    }

    // Function to display the binary linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->bit;  // Print the current bit (0 or 1)
            temp = temp->next;  // Move to the next node
        }
        cout << endl;
    }

    // Function to convert decimal number to binary and store in the linked list
    void decimalToBinary(int decimal) {
        // Handle edge case for zero
        if (decimal == 0) {
            insert(0);
            return;
        }

        // Convert the decimal to binary by dividing by 2 and storing remainders
        while (decimal > 0) {
            int remainder = decimal % 2;  // Get the remainder (binary bit)
            insert(remainder);  // Insert the binary bit in the list
            decimal = decimal / 2;  // Divide the decimal number by 2
        }
    }

    // Function to reverse the list to show the binary from MSB to LSB
    void reverse() {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;  // Update the head to the new reversed list
    }
};

int main() {
    SinglyLinkedList binaryList;

    // Take input from the user
    int decimal;
    cout << "Enter a decimal number (0-255): ";
    cin >> decimal;

    // Check if the input is within the valid range
    if (decimal < 0 || decimal > 255) {
        cout << "Please enter a number between 0 and 255." << endl;
        return 1;
    }

    // Convert the decimal number to binary and store it in the linked list
    binaryList.decimalToBinary(decimal);

    // Reverse the list to show the binary from MSB to LSB
    binaryList.reverse();

    // Display the binary number
    cout << "Binary equivalent: ";
    binaryList.display();

    return 0;
}
