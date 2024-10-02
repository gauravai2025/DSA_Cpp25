#include <bits/stdc++.h>
using namespace std;

// timecomplexity of mergeHeap is O(n+m) where n is size of heap1 and m is size of heap2
// space complexity is O(n+m)

// Function to heapify a subtree rooted at index i in an array of size n
void maxHeapify(vector<int>& heap, int n, int i) {
    int largest = i;          // Initialize largest as root
    int left = 2 * i + 1;     // Left child index
    int right = 2 * i + 2;    // Right child index

    // If left child is larger than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && heap[right] > heap[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(heap[i], heap[largest]);
        maxHeapify(heap, n, largest);  // Recursively heapify the affected subtree
    }
}

// Function to build a max heap from a given array
void buildMaxHeap(vector<int>& heap, int n) {
    // Start from the last non-leaf node and apply heapify
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(heap, n, i);
    }
}

// Function to merge two heaps and form a new max heap
void mergeHeaps(vector<int>& heap1, vector<int>& heap2, vector<int>& mergedHeap) {
    // Step 1: Concatenate the two heaps
    mergedHeap.insert(mergedHeap.end(), heap1.begin(), heap1.end());
    mergedHeap.insert(mergedHeap.end(), heap2.begin(), heap2.end());

    // Step 2: Build max heap from the combined array
    int n = mergedHeap.size();
    buildMaxHeap(mergedHeap, n);
}

// Function to print the heap
void printHeap(const vector<int>& heap) {
    for (int i : heap) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    // Example heaps as arrays
    vector<int> heap2 = { 9, 8, 7, 3, 4 };

    // Merging the heaps
    vector<int> mergedHeap;
    mergeHeaps(heap1p1 = { 10, 5, 6, 2 };
    vector<int> hea, heap2, mergedHeap);

    // Printing the merged heap
    cout << "Merged Max Heap: ";
    printHeap(mergedHeap);

    return 0;
}
