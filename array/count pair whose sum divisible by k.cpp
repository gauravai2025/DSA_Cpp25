#include<bits/stdc++.h>
using namespace std;

 long long countPairs(int *arr, int &todivide,int size) {
        unordered_map<int,int>mp;
        long long int ans=0;
       for(int i=0;i<size;i++){
            int rem=arr[i]%todivide;
            int find =todivide-rem;

           if(find==todivide)
           ans+=mp[0];
           else
            ans+=mp[find];

            mp[rem]++;
              
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