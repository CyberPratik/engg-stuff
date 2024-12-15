#include <iostream>
#include <string>
using namespace std;

// Class to represent a Job
class Job {
public:
    int job_id;
    string job_name;
    int priority;
    Job* next;

    // Constructor to initialize a Job
    Job(int id, string name, int prio) {
        job_id = id;
        job_name = name;
        priority = prio;
        next = nullptr;
    }
};

// Class to represent a Job Priority Queue using a linked list
class JobPriorityQueue {
private:
    Job* head;  // Pointer to the front of the queue

public:
    // Constructor to initialize the queue
    JobPriorityQueue() {
        head = nullptr;
    }

    // Destructor to clean up dynamically allocated memory
    ~JobPriorityQueue() {
        while (head != nullptr) {
            Job* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Insert a job into the queue based on priority
    void insert(int job_id, string job_name, int priority) {
        Job* newJob = new Job(job_id, job_name, priority);
        
        // If the queue is empty or the new job has higher priority than the head
        if (head == nullptr || head->priority < newJob->priority) {
            newJob->next = head;
            head = newJob;
        } else {
            // Traverse the list to find the appropriate position for the new job
            Job* temp = head;
            while (temp->next != nullptr && temp->next->priority >= newJob->priority) {
                temp = temp->next;
            }
            newJob->next = temp->next;
            temp->next = newJob;
        }
    }

    // Pop the job with the highest priority from the queue
    Job* pop() {
        if (head == nullptr) {
            cout << "Priority Queue is empty!" << endl;
            return nullptr;
        }
        Job* temp = head;
        head = head->next;
        return temp;
    }

    // Peek at the job with the highest priority (without removing it)
    Job* peek() {
        if (head == nullptr) {
            cout << "Priority Queue is empty!" << endl;
            return nullptr;
        }
        return head;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Display all the jobs in the queue
    void display() {
        if (head == nullptr) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        Job* temp = head;
        while (temp != nullptr) {
            cout << "Job ID: " << temp->job_id << ", Job Name: " << temp->job_name << ", Priority: " << temp->priority << endl;
            temp = temp->next;
        }
    }
};

// Main function to test the JobPriorityQueue
int main() {
    JobPriorityQueue pq;

    // Insert some jobs into the priority queue
    pq.insert(1, "Job 1", 5);
    pq.insert(2, "Job 2", 10);
    pq.insert(3, "Job 3", 2);
    pq.insert(4, "Job 4", 7);

    // Display the jobs in the priority queue
    cout << "Jobs in Priority Queue:" << endl;
    pq.display();

    // Process jobs based on priority (highest priority first)
    cout << "\nProcessing Jobs:" << endl;
    while (!pq.isEmpty()) {
        Job* job = pq.pop();
        cout << "Processing Job ID: " << job->job_id << ", Job Name: " << job->job_name << ", Priority: " << job->priority << endl;
        delete job;  // Free the memory for the processed job
    }

    return 0;
}
