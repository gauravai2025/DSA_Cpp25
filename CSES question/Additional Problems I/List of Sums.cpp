#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int n;
    cin>>n;
    int size=n*(n-1)/2;
    vector<int>arr(size,0);

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
     
     vector<int>ans;

     for(int i=0;i<n-1;i++){
        ans.push_back(arr[i]-1);
     }

    cout<<1<<" ";
     for(auto it:ans){
        cout<<it<<" ";
     }
 
 
    return 0;
}