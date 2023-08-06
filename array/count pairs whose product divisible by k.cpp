#include<bits/stdc++.h>
using namespace std;

    long long countPairs(int *arr, int &todivide,int size) {
        unordered_map<int,int>mp;
        long long int ans=0;
       for(int i=0;i<size;i++){
              int x= __gcd(arr[i],todivide);
                int want=todivide/x;
           for(auto &it:mp){
               if(it.first%want==0)
               ans+=it.second;
           }
           mp[x]++;
         
    }
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
int todivide;
cout<<"enter integer to check divisibility:\n";
cin>>todivide;
cout<<"number of pairs:"<<countPairs(arr,todivide,n);
 
    return 0;
}