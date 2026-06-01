#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<long long int>arr(n);

    for(int i=0;i<n;i++){
      cin>>arr[i];  
    }

    map<long long int,long long int>mp;
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(mp.count(arr[i])==0)
        mp[arr[i]]=i+1;
    }

    vector<int>feq(1e6+1,0);

    for(int i=0;i<n;i++){
        feq[mp[arr[i]]]++;
    }
   
    cout<<"frequency of element: \n";
 
    
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<feq[mp[arr[i]]]<<endl;
    }

return 0;
}