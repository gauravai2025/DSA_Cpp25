#include <bits/stdc++.h>
using namespace std;

// Class for Circular Queue
class circularQueue {
    public:
    int front, rear;
    int *arr;
    int size;

    // Constructor
    circularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueue Operation
    void enqueue(int x) {
        // Check if queue is full
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "queue is full\n";
            return;
        }

        // If queue is empty
        else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = x;
        }

        // Wrap around condition (important for circular nature)
        else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = x;
        }

        // Normal case
        else {
            rear = (rear + 1) % size; // Wrap around condition circular nature of queue
            arr[rear] = x;
        }
    }

    // Dequeue Operation
    void dequeue() {
        // Check if queue is empty
        if (front == -1) {
            cout << "queue is empty\n";
            return;
        }

        // If only one element left
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // Normal case
        else {
            arr[front] = -1;
            front = (front + 1) % size;  // Wrap around condition circular nature of queue
        }
    }

    // Get front element
    int peakfront() {
        if (front == -1) {
            cout << "queue is empty\n";
            return -1;
        }
        else {
            return arr[front];
        }
    }

    // Check if queue is empty
    bool isempty() {
        return front == -1;
    }

    // Get queue size
    int queuesize() {

        if (front == -1)
            return 0;
        else if (rear >= front)
            return rear - front + 1;
        else
            return rear + 1 + size - front;
    }

       int Rear() {
        if(rear==-1)
        return -1;
        else
        return arr[rear];
    }
    

     bool isFull() {
      if(front==0 && rear==size-1 || rear==front-1)  
      return 1;
      else
      return 0;      
    }

};

// Main function
int main() {
    circularQueue q(5);

    q.enqueue(7);
    q.enqueue(18);

    cout << "front element of queue: " << q.peakfront() << endl;
    q.dequeue();
    cout << "front element of queue: " << q.peakfront() << endl;

    cout << "size of queue: " << q.queuesize() << endl;

    q.dequeue();

    if (q.isempty())
        cout << "queue is empty\n";
    else
        cout << "queue is not empty\n";

        q.enqueue(9);

 if (q.isempty())
        cout << "queue is empty\n";
    else
        cout << "queue is not empty\n";

    cout << "size of queue: " << q.queuesize() << endl;
  
    cout << "Rear element of queue: " << q.Rear() << endl;

    if (q.isFull())
        cout << "queue is full\n";
    else
        cout << "queue is not full\n";


    return 0;
}
