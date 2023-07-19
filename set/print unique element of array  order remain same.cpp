#include<bits/stdc++.h>
using namespace std;
 void print_unique_element(vector<int>&ans,int*arr,int n){
unordered_set<int>st;
for(int i=0;i<n;i++){
    if(st.count(arr[i])<=0){
        ans.push_back(arr[i]);
        st.insert(arr[i]);
}
 }

 }


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
vector<int>ans;
print_unique_element(ans,arr,n);
cout<<"unique elements are\n";
 for(auto it:ans){
     cout<<it<<" ";
 }
 
 
    return 0;
}