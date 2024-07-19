#include <bits/stdc++.h>
using namespace std;

void two_sum(vector<int>& nums, int target, vector<int>& results, int idx) {

   unordered_map<int,int>mp;
   int size=nums.size();


   for(int i=0;i<size;i++){
    if(i==idx)
    continue;
    int find=target-nums[i];

    if(mp.find(find)!=mp.end()){
        results.push_back(i);
        results.push_back(mp[find]);
        results.push_back(idx);
        return ;

    }

    mp[nums[i]]=i;

   }
}

void threeSum(vector<int>& nums, int sum) {
    vector<int> results;
  
    int size = nums.size();

    for (int i = 0; i < size; i++) {
        int target = sum - nums[i];
        two_sum(nums,target, results, i);

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
