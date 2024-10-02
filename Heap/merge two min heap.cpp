#include <bits/stdc++.h>
using namespace std;

// Function to heapify a subtree rooted at index i in a min-heap
void minHeapify(vector<int>& heap, int n, int i) {
    int smallest = i;          // Initialize smallest as root
    int left = 2 * i + 1;      // Left child index
    int right = 2 * i + 2;     // Right child index

    // If left child is smaller than root
    if (left < n && heap[left] < heap[smallest])
        smallest = left;

    // If right child is smaller than smallest so far
    if (right < n && heap[right] < heap[smallest])
        smallest = right;

    // If smallest is not root, swap and continue heapifying
    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        minHeapify(heap, n, smallest);  // Recursively heapify the affected subtree
    }
}

// Function to build a min-heap from a given array
void buildMinHeap(vector<int>& heap, int n) {
    // Start from the last non-leaf node and apply heapify
    for (int i = n / 2 - 1; i >= 0; i--) {
        minHeapify(heap, n, i);
    }
}

// Function to merge two min-heaps and form a new min-heap
void mergeHeaps(vector<int>& heap1, vector<int>& heap2, vector<int>& mergedHeap) {
    // Step 1: Concatenate the two heaps
    mergedHeap.insert(mergedHeap.end(), heap1.begin(), heap1.end());
    mergedHeap.insert(mergedHeap.end(), heap2.begin(), heap2.end());

    // Step 2: Build min-heap from the combined array
    int n = mergedHeap.size();
    buildMinHeap(mergedHeap, n);
}

// Function to print the heap
void printHeap(const vector<int>& heap) {
    for (int i : heap) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    // Example min-heaps as arrays
    vector<int> heap1 = { 2, 5, 6, 10 };
    vector<int> heap2 = { 3, 4, 7, 8, 9 };

    // Merging the heaps
    vector<int> mergedHeap;
    mergeHeaps(heap1, heap2, mergedHeap);

    // Printing the merged min-heap
    cout << "Merged Min Heap: ";
    printHeap(mergedHeap);

    return 0;
}
