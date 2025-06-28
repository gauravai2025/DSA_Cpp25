#include <bits/stdc++.h>
using namespace std;

long long count_subarrays_difference_bw_maximum_and_minimum(vector<long long int>& arr,  long long int k) {

    long long ans = 0;
    int n = arr.size();
    int left = 0;
    
    deque< long long int> maxDeque, minDeque;

    for (int right = 0; right < n; ++right) {
        // Maintain the maxDeque for maximum value
        while (!maxDeque.empty() && arr[maxDeque.back()] <= arr[right]) {
            maxDeque.pop_back();
        }
        maxDeque.push_back(right);

        // Maintain the minDeque for minimum value
        while (!minDeque.empty() && arr[minDeque.back()] >= arr[right]) {
            minDeque.pop_back();
        }
        minDeque.push_back(right);

        // Ensure the difference condition is satisfied
        while (arr[maxDeque.front()] - arr[minDeque.front()] > k) {
            if (maxDeque.front() == left) maxDeque.pop_front();
            if (minDeque.front() == left) minDeque.pop_front();
            ++left;
        }

        // Count valid subarrays ending at 'right'
        ans += right - left + 1;
    }

    return ans;
}

int main() {
    long long int n, k;
    cin >> n >> k;
    vector< long long int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << count_subarrays_difference_bw_maximum_and_minimum(arr, k) << endl;

    return 0;
}
