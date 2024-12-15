#include <iostream>
using namespace std;

// Node class for the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Append a binary digit to the linked list
    void append(int data) {
        if (data != 0 && data != 1) {
            cout << "Only binary digits (0 or 1) are allowed!" << endl;
            return;
        }
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

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }

    // Compute the 1's complement
    LinkedList onesComplement() {
        LinkedList result;
        Node* temp = head;
        while (temp) {
            result.append(temp->data == 0 ? 1 : 0);
            temp = temp->next;
        }
        return result;
    }

    // Compute the 2's complement
    LinkedList twosComplement() {
        LinkedList ones = onesComplement();
        LinkedList result;
        Node* temp = ones.head;

        bool carry = true;
        while (temp) {
            if (carry) {
                if (temp->data == 1) {
                    result.append(0);
                } else {
                    result.append(1);
                    carry = false;
                }
            } else {
                result.append(temp->data);
            }
            temp = temp->next;
        }

        if (carry) {
            result.append(1); // Handle overflow in the most significant bit
        }
        return result.reverse(); // Reversing to get the correct order
    }

    // Reverse the linked list (utility for 2's complement)
    LinkedList reverse() {
        LinkedList reversed;
        Node* temp = head;
        while (temp) {
            Node* newNode = new Node(temp->data);
            newNode->next = reversed.head;
            reversed.head = newNode;
            temp = temp->next;
        }
        return reversed;
    }
};

int main() {
    LinkedList binaryNumber;

    cout << "Enter a binary number (digit by digit, end with -1): " << endl;
    int digit;
    while (true) {
        cin >> digit;
        if (digit == -1) break;
        binaryNumber.append(digit);
    }

    cout << "Original Binary Number: ";
    binaryNumber.display();

    LinkedList onesComp = binaryNumber.onesComplement();
    cout << "1's Complement: ";
    onesComp.display();

    LinkedList twosComp = binaryNumber.twosComplement();
    cout << "2's Complement: ";
    twosComp.display();

    return 0;
}
