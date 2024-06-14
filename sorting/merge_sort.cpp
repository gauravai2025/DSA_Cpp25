#include <bits/stdc++.h>

using namespace std;

 // function to merge two sorted arrays into one sorted array
void merge(vector<int>& arr, int strt, int mid, int end) {
    // define size of two arrays
    int size1 = mid - strt + 1;
    int size2 = end - mid;
 // define two vectors
    vector<int> arr1(size1);
    vector<int> arr2(size2);

    int idxcomm = strt; // Initialize to strt

    // copying elements of array into 1st vector
    for (int i = 0; i < size1; i++) {
        arr1[i] = arr[idxcomm];
        idxcomm++;
    }

    // copying elements of array into 2nd vector

    for (int i = 0; i < size2; i++) {
        arr2[i] = arr[idxcomm];
        idxcomm++;
    }

    // define left and right pointers for both vectors
    int left = 0;
    int right = 0;
    idxcomm = strt; // Reset idxcomm to the start index of the merged portion

    // merging two vectors into one sorted vector

    while (left < size1 && right < size2) {
        if (arr1[left] <= arr2[right]) {
            arr[idxcomm] = arr1[left];
            left++;
        } 
        
        else {
            arr[idxcomm] = arr2[right];
            right++;
        }

        idxcomm++;
    }

// copying remaining elements of 1st vector into merged vector
    while (left < size1) {
        arr[idxcomm] = arr1[left];
        left++;
        idxcomm++;
    }

// copying remaining elements of 2nd vector into merged vector
    while (right < size2) {
        arr[idxcomm] = arr2[right];
        right++;
        idxcomm++;
    }

    // clear both vectors memory relaesed
    arr1.clear();
    arr2.clear();
    
}


void merge_sort(vector<int>& arr, int strt, int end) {
    
    if (strt >= end) {
        return;
    }

    int mid = strt + (end - strt) / 2;

    merge_sort(arr, strt, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, strt, mid, end);
}

int main() {
    cout << "Enter size of array: ";
    int size;
    cin >> size;
// define vector for input
    vector<int> arr(size);

    cout << "Enter elements of array: ";
    // input array in loop
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // call merge_sort function

    merge_sort(arr, 0, size - 1);

  // print sorted array
    cout << "Sorted array is: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout<<endl;

    // print median of array
    if(size &1)
    {
        cout<<"Median is: "<<arr[size/2];
    }
    else
    {
        cout<<"Median is: "<<(arr[size/2]+arr[(size/2)-1])/2.0;
    }

    return 0;
}
