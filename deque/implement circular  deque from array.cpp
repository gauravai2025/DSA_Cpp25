#include <bits/stdc++.h>
using namespace std;

// deque : doubly ended circular queue
// defining class for deque
// time and space complexity of all operation is O(1)
// space complexity is O(n) from array

class Deque {
public:
    int *arr;
    int size;
    int front;
    int rear;

    // constructor
    Deque(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void insertback(int val) {
        // check if deque is full
        if ((rear == front - 1) || (front == 0 && rear == size - 1)) {
            cout << "Deque is full\n";
            return;
        }

        if (front == -1) {    // First element insert
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        
         else {
            rear = (rear + 1) % size; // maintain cyclic nature of circular queue
            arr[rear] = val;
        }
    }

    void insertfront(int val) {
        // check if deque is full
        if ((rear == front - 1) || (front == 0 && rear == size - 1)) {
            cout << "Deque is full\n";
            return;
        }

        if (front == -1) {   // First element insert
            front = 0;
            rear = 0;
            arr[front] = val;
        }
         else {
            front = (front - 1 + size) % size; // handle cyclic decrement
            arr[front] = val;
        }
    }

    void removefront() {
        // check if deque is empty
        if (front == -1) {
            cout << "Deque is empty\n";
            return;
        }

        if (front == rear) {  // Last element, deque is empty
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            arr[front] = -1;
            front = (front + 1) % size;
        }
    }

    void removeback() {
        // check if deque is empty
        if (front == -1) {
            cout << "Deque is empty\n";
            return;
        }

        if (rear == front) {  // Remove last element
            arr[rear] = -1;
            rear = -1;
            front = -1;
        } else {
            arr[rear] = -1;
            rear = (rear - 1 + size) % size; // handle cyclic decrement
        }
    }

    int peakfront() {
        // check if deque is empty
        if (front == -1) {
            cout << "Deque is empty\n";
            return -1;
        } else
            return arr[front];
    }

    int peakback() {
        // check if deque is empty
        if (front == -1) {
            cout << "Deque is empty\n";
            return -1;
        } else
            return arr[rear];
    }

    bool isempty() {
        return front == -1;
    }

    bool isfull() {
        return (front == 0 && rear == size - 1) || (rear == front - 1);
    }

    int dequesize() {
        if (isempty())
            return 0;
        if (rear >= front) {
            return rear - front + 1;
        } else {
            return size - front + rear + 1;
        }
    }
};

int main() {
    // creating deque of size 5
    Deque dq(5);

    dq.insertback(10);
    dq.insertback(20);
    dq.insertfront(5);
    dq.insertfront(1);
    dq.insertback(30);

    // Printing deque state
    cout << "Front element: " << dq.peakfront() << endl;
    cout << "Rear element: " << dq.peakback() << endl;

    dq.removefront();
    cout << "Front element after removing front: " << dq.peakfront() << endl;

    dq.removeback();
    cout << "Rear element after removing back: " << dq.peakback() << endl;

    // Check if deque is full
    if (dq.isfull()) {
        cout << "Deque is full\n";
    }

    // Check deque size
    cout << "Deque size: " << dq.dequesize() << endl;

    return 0;
}
