#include <iostream>
using namespace std;

class Node {
public:
    int acc_no;
    string acc_name;
    float acc_balance;
    Node* next;

    Node(int acc_no, string acc_name, float acc_balance) {
        this->acc_no = acc_no;
        this->acc_name = acc_name;
        this->acc_balance = acc_balance;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void append(int acc_no, string &acc_name, float acc_balance) {
        if (!head) {
            head = new Node(acc_no, acc_name, acc_balance);
            return;
        }
        Node* t = head;
        while (t->next) {
            t = t->next;
        }
        t->next = new Node(acc_no, acc_name, acc_balance);
    }

void find(const string& acc_name) {
    Node* t = head;
    while (t) {
        if (t->acc_name == acc_name) { // Direct string comparison
            cout << "Match Found:" << endl;
            cout << "Ac No: " << t->acc_no << endl;
            cout << "Ac Name: " << t->acc_name << endl;
            cout << "Ac Balance: " << t->acc_balance << endl;
            return; // Exit function after finding a match
        }
        t = t->next;
    }
    cout << "No Match Found." << endl;
}


    void display() {
        if (!head) {
            cout << "No accounts in the list." << endl;
            return;
        }
        Node* t = head;
        cout << "Account List:" << endl;
        while (t) {
            cout << "Ac No: " << t->acc_no << endl;
            cout << "Ac Name: " << t->acc_name << endl;
            cout << "Ac Balance: " << t->acc_balance << endl;
            t = t->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    while (true) {
        cout << "1. Insert Customer" << endl;
        cout << "2. Find Customer" << endl;
        cout << "3. List Customers" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer
        switch (choice) {
        case 1: {
            int acc_no;
            cout << "Enter Ac No: ";
            cin >> acc_no;
            cin.ignore(); // Clear buffer before taking string input
            cout << "Enter Ac Name: ";
            string acc_name;
            getline(cin, acc_name); // Use getline for string input
            float acc_balance;
            cout << "Enter Ac Balance: ";
            cin >> acc_balance;
            ll.append(acc_no, acc_name, acc_balance);
            break;
        }
        case 2: {
            cout << "Find Name: ";
            string acc_name;
            cin.ignore(); // Clear buffer before taking string input
            getline(cin, acc_name); // Use getline for string input
            ll.find(acc_name);
            break;
        }
        case 3:
            ll.display();
            break;
        default:
            cout << "Invalid Option" << endl;
        }
    }
    return 0;
}
