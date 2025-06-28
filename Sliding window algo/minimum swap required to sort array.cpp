#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>&arr, int n){
      
        vector<int>org;

        for(int i=0;i<n;i++){
            org.push_back(arr[i]);
        }
        
        sort(arr.begin(),arr.end());
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        
        int cnt=0;
        
        for(int i=0;i<n;i++){
            
            while(mp[org[i]]!=i){
             int idx=mp[org[i]];
             swap(org[i],org[idx]);
             cnt++;
             
            }
        }
        
        return cnt;
       
        
    }
 
int main()
{

int size;
cout<<"enter size of array\n";
cin>>size;

vector<int>arr(size);
cout<<"array element \n";

for(int i=0;i<size;i++){
    cin>>arr[i];
}
 
 cout<<"minimum swaps required to sort : "<<minSwaps(arr,size);

 cout<<"sorted array\n";

 for(auto it:arr){
    cout<<it<<" ";
 }
 
    return 0;
}