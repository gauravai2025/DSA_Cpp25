#include<bits/stdc++.h>
using namespace std;

void maxSubsequence(vector<int>& nums, int k, vector<int>&ans) {
   
   vector<int>temp(nums.begin(),nums.end());
  

    nth_element(temp.begin(),temp.begin()+k-1,temp.end(),greater<int>());

    int countkth=count(temp.begin(),temp.begin()+k,temp[k-1]);

    for(int ele:nums){

    if(ele>temp[k-1])
    ans.push_back(ele);

     else if(ele==temp[k-1] && countkth>0){
    ans.push_back(ele);
    countkth--;

     }

    }

        
    }
 
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

    vector<int>ans;
    maxSubsequence(arr, k, ans);

    cout << "The subsequence of length " << k << " with the largest sum is: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
 
    return 0;
}