#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<long long int>arr(n);
    vector<long long int>temp(n);

    for(int i=0;i<n;i++){
      cin>>arr[i];  
      temp[i]=arr[i];
    }

    map<long long int,long long int>mp;
    sort(temp.begin(),temp.end());

    for(int i=0;i<n;i++){
        if(mp.count(temp[i])==0)
        mp[temp[i]]=i+1;
    }

    vector<int>feq(1e6+1,0);

     long long int ans=0;
     int right=0,left=0;

     while(right<n){

      feq[mp[arr[right]]]++; 
       
      //duplicates in subarray
      while( feq[mp[arr[right]]]>1){
        feq[mp[arr[left]]]--;
        left++;
      }

      ans+=right-left+1;
      right++;
     }

     cout<<ans<<endl;

return 0;
}