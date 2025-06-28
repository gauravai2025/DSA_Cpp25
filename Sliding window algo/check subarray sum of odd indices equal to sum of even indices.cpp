#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void subarrayequal(vector<ll>&arr,int n)
{

map<ll,ll>mp;
mp[0]++;

ll oddsum=0,evensum=0;

for(int i=0;i<n;i++){

    if(i&1)
    oddsum+=arr[i];
    else
    evensum+=arr[i]; 

    if(mp.count(oddsum-evensum)>0){
        cout<<"YES\n";
        return ;
    }

    mp[oddsum-evensum]++;

}

cout<<"NO\n";

}
  
 
int main()
{
    
ll n;
cin>>n;

vector<ll>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

subarrayequal(arr,n);

    return 0;
}