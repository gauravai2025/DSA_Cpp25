#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted subarrays
void merge(vector<int>& arr, int start, int mid, int end) {
    int start2 = mid + 1;

    // If the direct merge is already sorted
    if (arr[mid] <= arr[start2]) {
        return;
    }

    // Two pointers to maintain start of both arrays to merge
    while (start <= mid && start2 <= end) {

        // If the element at `start` is in correct place
        if (arr[start] <= arr[start2]) {
            start++;
        }
        else {
            int value = arr[start2];
            int index = start2;

            // Shift all elements between `start` and `start2` right by 1.
            while (index != start) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[start] = value;

            // Update all pointers
            start++;
            mid++;
            start2++;
        }
    }
}

// Recursive function to divide the array and call merge on the subarrays
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Helper function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Original array: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
