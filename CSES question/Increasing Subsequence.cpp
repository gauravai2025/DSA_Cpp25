#include<bits/stdc++.h>
using namespace std;

 

   
int lengthOfLIS(vector<int>& nums) {

    vector<int>lislen;
    lislen.push_back(nums[0]);

    int size=nums.size();

    for(int i=1;i<size;i++){

      if(nums[i]>lislen.back())
      lislen.push_back(nums[i]);

      else{
       int idx=lower_bound(lislen.begin(),lislen.end(),nums[i])-lislen.begin();
       lislen[idx]=nums[i]; 
      }
        }

        int lengthoflis=lislen.size();

        return lengthoflis;
        
    }
 
int main()
{

int n;
cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<lengthOfLIS(arr);
 
 
 
    return 0;
}