#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k) {
    // Write your code here
    long long int sum=0;
    int size=a.size();
    int lft=0,rgt=0;
    int ans=0;
    while(rgt<size){
        sum+=a[rgt];

        if(sum==k)
        ans=max(ans,rgt-lft+1);
        else if(sum>k){
            while(sum>k){
                sum-=a[lft];
                lft++;
            }
            if(sum==k)
           ans=max(ans,rgt-lft+1);
        }
        rgt++;

    }
    // if(ans==INT_MIN)
    // return 0;
    // else
    return ans;




}
 
int main()
{

    cout<<"enter number of element:\n";
   int n;
   cin>>n;
   vector<int>arr(n);
   cout<<"enter element of array\n";
   for(int  i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"enter sum of subarray\n";
    int k;
    cin>>k;
cout<<"length of lomgest subarray with sum "<<k<<" :\n" <<longestSubarrayWithSumK(arr,k);
 
 
    return 0;
}