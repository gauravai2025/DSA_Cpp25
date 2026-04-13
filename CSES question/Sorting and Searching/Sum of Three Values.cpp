#include <bits/stdc++.h>
using namespace std;

void threeSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> results; // To store the triplet indices

    // Create a vector of pairs to store the values and their original indices
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = {nums[i], i + 1}; // Use 1-based index
    }

    // Sort the array based on the values
    sort(arr.begin(), arr.end());

    // Iterate over the array to fix the first element
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;
           
           // two pointer approach just like in 2 sum
        while (left < right) {
            int sum = arr[i].first + arr[left].first + arr[right].first;

            if (sum == target) {
                results.push_back({arr[i].second, arr[left].second, arr[right].second});
                break;  // Break the loop if we find a valid triplet
            } 
            
            else if (sum < target) {
                left++;
            } 
            
            else {
                right--;
            }
        }

        if (!results.empty()) {  // only one triplet is needed
            break;
        }
    }

    if (results.empty()) {
        cout << "IMPOSSIBLE";
    } 
    
    else {
        for (const auto& result : results) {
            cout << result[0] << " " << result[1] << " " << result[2] << "\n";
        }
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n < 3) {
        cout << "IMPOSSIBLE";
        return 0;
    }

    threeSum(arr, x);

    return 0;
}
