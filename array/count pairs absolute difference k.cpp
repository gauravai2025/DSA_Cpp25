#include<bits/stdc++.h>
using namespace std;
// time complexity O(n)
// space complexity O(n)
long long int difference_k(int *arr,int size,int diff){
     unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            mp[arr[i]]++;
        }
     long long   int ans=0;
        for(int i=0;i<size;i++){
            if(mp.find(diff+arr[i])!=mp.end())
            ans+=mp[diff+arr[i]];
    }
    return ans;
}
 
int main()
{
    cout<<"enter size of array:\n";
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter element of array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter integer to check absolute difference:\n";
    int diff;
    cin>>diff;
cout<<"number of pairs:"<<difference_k(arr,size,diff)<<"\n";
 
 
 
    return 0;
}