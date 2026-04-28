#include <bits/stdc++.h>
using namespace std;


// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

// The union of two arrays can be defined as the common and distinct elements in the two arrays.

// NOTE: Elements in the union should be in ascending order.



    // Function to find union of two sorted arrays using two pointers
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        // Vector to store union elements
        vector<int> Union;

        // Initialize two pointers for both arrays
        int i = 0, j = 0;

        // Loop until either pointer reaches the end
        while (i < n && j < m) {
            // If current element in arr1 is smaller
            if (arr1[i] < arr2[j]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++;  // Move pointer in arr1
            }
            // If current element in arr2 is smaller
            else if (arr2[j] < arr1[i]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr2[j])
                    Union.push_back(arr2[j]);
                j++;  // Move pointer in arr2
            }
            else {
                // Elements are equal, add once if not duplicate
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++; j++;  // Move both pointers
            }
        }

        // Append remaining elements from arr1
        while (i < n) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

        // Append remaining elements from arr2
        while (j < m) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

        // Return the final union vector
        return Union;
    }


int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

   
    vector<int> result = findUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) cout << val << " ";
    return 0;
}
