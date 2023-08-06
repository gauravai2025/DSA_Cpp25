#include<bits/stdc++.h>
using namespace std;
// time complexity O(n)
// space complexity O(n)
count_subaary(int *arr,int size,long long sum){
    unordered_map<long long int,int>mp;
    int ans=0;
    long long int presum=0;
    mp[0]=1; // if sum is equal to sum of subaaray
    for(int i=0;i<size;i++){
         presum+=arr[i];
        int find=presum-sum;
        ans+=mp[find];
        mp[presum]++;
       

    }
    //ans+=mp[sum-presum];
    return ans;

}
 
int main()
{
 cout<<"enter size of array:\n"
;
int n;
cin>>n;
int arr[n];
cout<<"enter element of array:\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
} 
cout<<"sum of subaaray:\n";
long long int sum;
cin>>sum;
 
 cout<<"number of subaaray:"<<count_subaary(arr,n,sum)<<"\n";
    return 0;
}