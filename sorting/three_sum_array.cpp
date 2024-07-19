#include <bits/stdc++.h>
using namespace std;

void two_sum(vector<int>& nums, int left, int right, int target,vector<int>& results,int num) {

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum > target)
            right--;
        else if (sum < target)
            left++;
        else {
            results.push_back(num);
            results.push_back(nums[left]);
            results.push_back(nums[right]);
           return ;
        }
    }
}

void threeSum(vector<int>& nums,int sum) {
    vector<int> results;
    sort(nums.begin(), nums.end());
    int size = nums.size();

    for (int i = 0; i< size; i++) {
      
        int target =sum -nums[i];
        two_sum(nums, i + 1, size - 1, target, results,nums[i]);

        if(results.size()>0)
        break;
    }

    if (results.empty()) {
        cout << "IMPOSSIBLE";
    } 
    
    else {
        for (auto elem: results) {
                cout <<elem<< " ";
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

    threeSum(arr,x);

    return 0;
}
