#include <iostream>
#include <string>
using namespace std;

#define SIZE 5 // Maximum size of the circular queue

class PizzaQueue {
private:
    int front, rear, count;
    string orders[SIZE];

public:
    PizzaQueue() {
        front = 0;     // Always start at 0
        rear = -1;     // Rear starts at -1
        count = 0;     // Count of elements in the queue
    }

    // Check if the queue is full
    bool isFull() {
        return count == SIZE;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return count == 0;
    }

    // Add an order to the queue
    void enqueue(string order) {
        if (isFull()) {
            cout << "Queue is full! Cannot take more orders." << endl;
            return;
        }

        rear = (rear + 1) % SIZE;
        orders[rear] = order;
        count++;
        cout << "Order added: " << order << endl;
    }

    // Remove an order from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! No orders to process." << endl;
            return;
        }

        cout << "Order processed: " << orders[front] << endl;
        front = (front + 1) % SIZE;
        count--;
    }

    // Display all orders in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty! No orders to display." << endl;
            return;
        }

        cout << "Current orders in the queue:" << endl;
        int index = front;
        for (int i = 0; i < count; i++) {
            cout << orders[index] << endl;
            index = (index + 1) % SIZE;
        }
    }
};

int main() {
    PizzaQueue pq;
    int choice;
    string order;

    while (true) {
        cout << "\nPizza Order System:\n";
        cout << "1. Add Order\n";
        cout << "2. Process Order\n";
        cout << "3. Display Orders\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter pizza order: ";
                cin.ignore(); // Clear input buffer
                getline(cin, order);
                pq.enqueue(order);
                break;

            case 2:
                pq.dequeue();
                break;

            case 3:
                pq.display();
                break;

            case 4:
                cout << "Exiting system. Thank you!" << endl;
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
