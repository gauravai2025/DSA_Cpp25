#include<bits/stdc++.h>
using namespace std;
// time complexity is O(n) and space complexity is O(n)

void reverse1(int *arr ,vector<int> &ans,int n){
    if(n<0)
    return ;
    ans.push_back(arr[n]);
    reverse1(arr,ans,n-1);
}

int main()
{
 cout<<"enter size of array\n";
    int size ;
    cin>>size ;
    int *arr=new int[size ];
    cout<<"enter element of array\n";
    for(int i=0;i<size ;i++){
        cin>>arr[i];}

     vector<int>ans;

     reverse1(arr,ans,size-1);
     cout<<"reverse array is\n";
        for(int i=0;i<size ;i++){
            cout<<ans[i]<<" ";}
 
 
    return 0;
}