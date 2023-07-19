#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter size of array\n";
int n;
cin>>n;
int arr[n];
cout<<"enter elements of array\n";
for(int i=0;i<n;i++){
cin>>arr[i];
}
unordered_map<int,int> m;
for(int i=0;i<n;i++){
    if(m.count(arr[i])<=0){
    cout<<arr[i]<<" ";
    m[arr[i]]++;
    }
}
 
    return 0;
}