#include<bits/stdc++.h>
using namespace std;

  void nge( int*a,int size,vector<int>&ans){
    for(int i=0;i<size;i++){
int *upb=upper_bound(a,a+size,a[i]);
    if(upb==a+size)
    ans.push_back(-1);  // NGE not found
    else
    ans.push_back(*upb);
    }
   
 }
int main()
{
int size;
  cout<<"enter size of array\n";
  cin>>size;
  int a[size];
    cout<<"enter  element of array in sorted order"<<"\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    vector<int>ans;
nge(a,size,ans);
cout<<"nge of each element of given array\n";
 for(auto it:ans){
        cout<<it<<" ";
 }
 
    return 0;
}