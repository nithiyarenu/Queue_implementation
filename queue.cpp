#include<iostream>
using namespace std;

class Queue {
    private:
        int front;
        int rear;
        int arr[5];
    public:
        // Constructor to initialize front, rear, and the array elements to 0
        Queue() {
            front = -1;
            rear = -1;
            for(int i = 0; i < 5; i++) {
                arr[i] = 0;
            }
        }

        // Function to check if the queue is empty
        bool isEmpty() {
            if(rear == -1 && front == -1) {
                return true;
            }
            else {
                return false;
            }
        }

        // Function to check if the queue is full
        bool isFull() {
            if(rear == 4) {
                return true;
            }
            else {
                return false;
            }
        }

        // Function to add an element to the queue (enqueue)
        void enqueue(int value) {
            if(isFull()) {
                cout << "Queue is full" << endl;
                return;
            }
            else if(isEmpty()) {
                rear = 0;
                front = 0;
            }
            else {
                rear++;
            }
            arr[rear] = value;
        }

        // Function to remove an element from the queue (dequeue)
        int dequeue() {
            int x;
            if(isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }
            else if(rear == front) {
                x = arr[front];
                arr[front] = 0;
                rear = -1;
                front = -1;
            }
            else {
                x = arr[front];
                arr[front] = 0;
                front++;
            }
            return x;
        }

        // Function to count the number of elements in the queue
        int count() {
            return (rear - front + 1);
        }

        // Function to display the elements in the queue
        void display() {
            cout << "All values in the queue are: " << endl;
            for(int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Queue q1;
    int option, value;
    do {
        // Displaying the menu options to the user
        cout << "Select the operation you want to perform. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Count()" << endl;
        cout << "6. Display()" << endl;
        cout << "7. Clear screen()" << endl;
        
        // Taking user input
        cin >> option;
        
        // Switch case to handle different operations
        switch(option) {
            case 0:
                break;
            case 1:
                cout << "Enter value to enqueue: " << endl;
                cin >> value;
                q1.enqueue(value); // Enqueue operation
                break;
            case 2:
                cout << "Dequeue operation, dequeued value: " << q1.dequeue() << endl; // Dequeue operation
                break;
            case 3:
                if(q1.isEmpty()) {
                    cout << "Queue is empty" << endl; // Check if queue is empty
                }
                else {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 4:
                if(q1.isFull()) {
                    cout << "Queue is full" << endl; // Check if queue is full
                }
                else {
                    cout << "Queue is not full" << endl;
                }
                break;
            case 5:
                cout << "Number of elements in the queue: " << q1.count() << endl; // Count operation
                break;
            case 6:
                cout << endl;
                q1.display(); // Display operation
                break;
            case 7:
                system("cls"); // Clear screen
                break;
            default:
                cout << "Invalid input, please try again." << endl; // Invalid input case
                break;
        }
    } while(option != 0); // Loop continues until user enters 0 to exit
}

