#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the value of k (1-based index): ";
    cin >> k;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Using nth_element to find the k-th smallest element
    nth_element(arr.begin(), arr.begin() + k - 1, arr.end());
    cout << "The " << k << "-th smallest element is: " << arr[k - 1] << endl;
 
    return 0;
}