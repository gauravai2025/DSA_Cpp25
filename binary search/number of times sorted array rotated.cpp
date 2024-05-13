#include<bits/stdc++.h>
using namespace std;

int count_rotation(int *arr, int size){
    int strt = 0, end = size-1;
    int mid, next = 0, prev = 0;

    // Check if the array is already sorted
    if (arr[strt] <= arr[end])
        return 0;

    while(strt <= end){
        mid = strt + (end - strt) / 2;
        next = (mid + 1) % size;
        prev = (mid - 1 + size) % size;

        if(arr[next] >= arr[mid] && arr[prev] >= arr[mid])
            return mid;

        else if(arr[mid] >= arr[strt])
            strt = mid + 1;

        else if(arr[end] >= arr[mid])
            end = mid - 1;
    }
     return 0;
}

int main(){
    int size;
    cout << "Enter size of array\n";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << count_rotation(arr, size);

    return 0;
}
