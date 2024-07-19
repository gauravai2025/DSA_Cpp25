#include <bits/stdc++.h>
using namespace std;

void two_sum(vector<int>& nums, int left, int right, int target, vector<int>& results, int val, unordered_map<int, vector<int>>& ele_idx) {
    
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum > target)
            right--;
        else if (sum < target)
            left++;
        else {
            for (int i = 0; i < ele_idx[val].size(); i++) {
                if (results.size() == 0 || ele_idx[val][i] != -1) {
                    results.push_back(ele_idx[val][i]);
                    ele_idx[val][i] = -1;
                    break;
                }
            }

            for (int i = 0; i < ele_idx[nums[left]].size(); i++) {
                if (results.size() == 0|| ele_idx[nums[left]][i] != -1) {
                    results.push_back(ele_idx[nums[left]][i]);
                    ele_idx[nums[left]][i] = -1;
                    break;
                }
            }

            for (int i = 0; i < ele_idx[nums[right]].size(); i++) {
                if (results.size() == 0|| ele_idx[nums[right]][i] != -1) {
                    results.push_back(ele_idx[nums[right]][i]);
                    ele_idx[nums[right]][i] = -1;
                    break;
                }
            }
            return;
        }
    }
}

void threeSum(vector<int>& nums, int sum) {
    vector<int> results;
    unordered_map<int, vector<int>> ele_idx;

    for (int i = 0; i < nums.size(); i++) {
        ele_idx[nums[i]].push_back(i + 1); // Storing 1-based index
    }

    sort(nums.begin(), nums.end());
    int size = nums.size();

    for (int i = 0; i < size; i++) {
        int target = sum - nums[i];
        two_sum(nums, i + 1, size - 1, target, results, nums[i], ele_idx);

        if (results.size() == 3)
            break;
    }

    if (results.empty()) {
        cout << "IMPOSSIBLE";
    } else {
        for (auto elem : results) {
            cout << elem << " ";
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
