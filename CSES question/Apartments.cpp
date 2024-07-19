#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,m,k;
cin>>n>>m>>k;

vector<int>apl(n);
vector<int>dp(m);

for(int i=0;i<n;i++){
    cin>>apl[i];
}


for(int i=0;i<m;i++){
    cin>>dp[i];
}

sort(apl.begin(),apl.end());
sort(dp.begin(),dp.end());

int i=0,j=0;
int ans=0;

while(i<n && j<m){
    if(abs(apl[i]-dp[j])<=k){
        i++;
        j++;
        ans++;
    }
    else if(apl[i]>dp[j]){
        j++;
    }
    else{
        i++;
    }

}
cout<<ans;
 
 
 
    return 0;
}