#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
public:
    vector<int> arr;
    int size;

    // Constructor
    MaxHeap() {
        arr.push_back(-1); // Initial dummy node to start index from 1
        size = 0;
    }

    // Recursive heapify-up (used during insertion)
    void heapifyUp(int idx) {
        if (idx <= 1) return; // Base case: if the node is root, stop

        int parent = idx / 2;
        
        // If the current node is greater than its parent, swap and recurse up
        if (arr[parent] < arr[idx]) {
            swap(arr[parent], arr[idx]);
            heapifyUp(parent); // Recur on the parent node
        }
    }

    // Recursive heapify-down (used during deletion)
    void heapifyDown(int idx) {
        int left = 2 * idx;
        int right = 2 * idx + 1;
        int largest = idx;

        // Check if left child is larger than current node
        if (left <= size && arr[left] > arr[largest]) {
            largest = left;
        }

        // Check if right child is larger than current node or left child
        if (right <= size && arr[right] > arr[largest]) {
            largest = right;
        }

        // If largest is not the current node, swap and recur on the largest child
        if (largest != idx) {
            swap(arr[idx], arr[largest]);
            heapifyDown(largest); // Recur on the swapped child node
        }
    }

    // Insert into the heap
    void insert(int val) {
        size++;
        if (arr.size() > size)
            arr[size] = val;
        else
            arr.push_back(val);

        // Recursively heapify up to maintain max-heap property
        heapifyUp(size);
    }

    // Delete the root (max element) from the heap
    void deleteFromHeap() {
        if (size == 0) {
            cout << "Heap is empty" << endl;
            return;
        }

        // Move the last element to the root and decrease the heap size
        arr[1] = arr[size];
        size--;

        // Recursively heapify down to maintain max-heap property
        heapifyDown(1);
    }

    // Print the heap
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();  // Output the heap
    
    h.deleteFromHeap();  // Delete root
    h.print();  // Output after deletion

    return 0;
}
