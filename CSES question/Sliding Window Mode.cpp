#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    multiset<int>pq;

    int left=0,right=0;
    map<int,int>mp;


    while(right<n){
      
     mp[arr[right]]++;


    }
    return 0;
}