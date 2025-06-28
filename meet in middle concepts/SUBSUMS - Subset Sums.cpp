#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<int>&arr,int n,int a,int b){

int left=n/2;
int right=n-left;
vector<ll>leftsum;
vector<ll>rightsum;

for(ll i=0;i<(1<<left);i++){
    ll sum=0;
for(int j=0;j<left;j++){
    if(i&(1<<j)){
        sum+=arr[j];
    }
}

leftsum.push_back(sum);
}

for(ll i=0;i<(1<<right);i++){
    ll sum=0;
for(int j=0;j<right;j++){
    if(i&(1<<j)){
        sum+=arr[j+left];
    }
}

rightsum.push_back(sum);
}


sort(rightsum.begin(),rightsum.end());

ll cntsubset=0;
for(int i=0;i<leftsum.size();i++){
    ll low=lower_bound(rightsum.begin(),rightsum.end(),a-leftsum[i])-rightsum.begin();
    ll high=upper_bound(rightsum.begin(),rightsum.end(),b-leftsum[i])-rightsum.begin();
    cntsubset+=(high-low);

}

return cntsubset;

}
 
int main()
{

int n,a,b;
cin>>n>>a>>b;
vector<int>arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];

cout<<solve(arr,n,a,b)<<endl;
 
 
return 0;
}