#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;
vector<pair<int,int>>arr;

for(int i=0;i<n;i++){

    int x;
    cin>>x;
    arr.push_back({x,i});
}

int cnt=0;

sort(arr.begin(),arr.end());

for(int i=0;i<n-1;i++)
{
  cnt=max(cnt,abs(arr[i].second-i));

} 

cout<<cnt;
 return 0;
}