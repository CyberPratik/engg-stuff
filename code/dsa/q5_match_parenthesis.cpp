#include <iostream>
using namespace std;

// Node class for the linked list
class Node {
public:
    char data;
    Node* next;

    Node(char data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class implemented using a linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push a character onto the stack
    void push(char data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    // Pop a character from the stack
    char pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return '\0';
        }
        char data = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return data;
    }

    // Peek the top element of the stack
    char peek() {
        if (isEmpty()) {
            return '\0';
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
};

// Function to check for parenthesis matching
bool isValidParenthesis(const string& expr) {
    Stack stack;

    // Iterate through each character in the expression
    for (char ch : expr) {
        // Push opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
        // Check for closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If stack is empty, there's no matching opening bracket
            if (stack.isEmpty()) {
                return false;
            }

            char top = stack.pop();

            // Check if the popped bracket matches the current closing bracket
            if ((ch == ')' && top != '(') || 
                (ch == '}' && top != '{') || 
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // If the stack is empty, all brackets are matched
    return stack.isEmpty();
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isValidParenthesis(expr)) {
        cout << "The parenthesis are balanced." << endl;
    } else {
        cout << "The parenthesis are not balanced." << endl;
    }

    return 0;
}
