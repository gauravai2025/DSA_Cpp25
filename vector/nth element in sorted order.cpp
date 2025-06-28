#include <bits/stdc++.h>
using namespace std;

// average time complexity-O(n)

int main() {
    vector<int> arr = {7, 2, 1, 8, 6, 3, 5, 4};
    int n = 3; // Find the 3rd smallest element (0-based index)

    nth_element(arr.begin(), arr.begin() + n, arr.end()); // place nt element in coorect position according to sorted order

    cout << "The " << n + 1 << "th smallest element is: " << arr[n] << endl;

    return 0;
}
