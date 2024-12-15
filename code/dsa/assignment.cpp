#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string name;
    string location;
    int emp_num;
    Node *next;

    Node(string name, string location, int emp_num)
    {
        this->name = name;
        this->location =
            location;
        this->emp_num = emp_num;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
        int n;
        cout << "Enter Number of Companies to Create: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string name;
            cout << "Enter Company Name: ";
            cin >> name;

            string location;
            cout << "Enter Company Location: ";
            cin >> location;

            int emp_num;
            cout << "Enter No. of Employees: ";
            cin >> emp_num;

            Node *nn = new Node(name, location, emp_num);

            if (head == nullptr)
            {
                head = nn;
            }
            else
            {
                Node *temp = head;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = nn;
            }
        }
    }

    void display()
    {
        Node *temp = head;
        cout << "\nCompanies List: " << endl;
        while (temp != nullptr)
        {
            cout << "Company Name: " << temp->name << endl;
            cout << "Location: " << temp->location << endl;
            cout << "No. of Employees: " << temp->emp_num << endl;
            cout << endl;
            temp = temp->next;
        }
    }

    void append()
    {
        cout << "Append: " << endl;
        string name;
        cout << "Enter Company Name: ";
        cin >> name;

        string location;
        cout << "Enter Company Location: ";
        cin >> location;

        int emp_num;
        cout << "Enter No. of Employees: ";
        cin >> emp_num;

        Node *nn = new Node(name, location, emp_num);

        if (head == nullptr)
        {
            head = nn;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = nn;
        }
    }

    void prepend()
    {
        cout << "Prepend: " << endl;
        string name;
        cout << "Enter Company Name: ";
        cin >> name;

        string location;
        cout << "Enter Company Location: ";
        cin >> location;

        int emp_num;
        cout << "Enter No. of Employees: ";
        cin >> emp_num;

        Node *nn = new Node(name, location, emp_num);
        nn->next = nullptr;
        head = nn;
    }

    void search()
    {
        Node *temp = head;
        cout << "Enter Name to search: ";
        string name;
        cin >> name;
        while (temp != nullptr)
        {
            if (temp->name == name)
            {
                cout << "Found Result: " << endl;
                cout << "Company Name: " << temp->name << endl;
                cout << "Location: " << temp->location << endl;
                cout << "No. of Employees: " << temp->emp_num << endl;
                cout << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not Found!" << endl;
    }
};

int main()
{
    LinkedList ll;
    while (true)
    {
        int operation;
        cout << "1. Append a Company" << endl;
        cout << "2. Prepend a Company" << endl;
        cout << "3. Find a Company" << endl;
        cout << "4. Display List" << endl;
        cout << "Enter your choice: ";
        cin >> operation;
        switch (operation)
        {
        case 1:
            ll.append();
            break;
        case 2:
            ll.prepend();
            break;
        case 3:
            ll.search();
            break;
        case 4:
            ll.display();
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
        cout << "Do you want to continue? (yes 1 or no 0): ";
        int ch;
        cin >> ch;
        if (ch == 0)
        {
            cout << "Thank You!" << endl;
            break;
        }
        else
        {
            cout << "Welcome back!" <<endl;
        }
    }
    return 0;
}