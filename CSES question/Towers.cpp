#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
vector<int>arr(n);
map<int,int>mp;

for(int i=0;i<n;i++){

    cin>>arr[i];

    if(mp.empty())
    mp[arr[i]]=1;

    else{
      for(auto it:mp){
        if(it.first>=arr[i])

      } 
    }
}
 
 
 
    return 0;
}