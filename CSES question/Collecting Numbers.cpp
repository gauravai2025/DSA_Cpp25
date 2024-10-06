#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;
vector<pair<int,int>>arr(n);

for(int i=0;i<n;i++){

cin>>arr[i].first;
arr[i].second=i;
}
 
sort(arr.begin(),arr.end());

int cnt=1;
int  prev=arr[0].second;

for(int i=1;i<n;i++){

    if(abs(arr[i].second-prev)==1){
       prev=arr[i].second; 
    continue;
}

else{
    cnt++;
    prev=arr[i].second;
}
 
}

cout<<cnt-1<<endl;
 
    return 0;
}