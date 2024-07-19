#include <bits/stdc++.h>
using namespace std;

 bool two_sum(vector<int>& nums,int left,int right,int target){

        while(left<right){

           if(nums[left]+nums[right]>target)
           right--;

           else if(nums[left]+nums[right]<target) 
           left++;
           // target match
           else{
        
            return 1;
           }
        }

        return 0;

    }


void threeSum(vector<int>& nums,int sum) {
 
    sort(nums.begin(), nums.end());
    int size = nums.size();

    for (int i = 0; i< size; i++) {
      
        int target =sum -nums[i];

        if(two_sum(nums, i + 1, size - 1, target))
        cout<<"possible";
        return;
       
    }

  
    cout << "IMPOSSIBLE"; 
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
