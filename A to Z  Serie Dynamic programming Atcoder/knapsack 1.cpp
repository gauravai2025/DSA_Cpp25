#include<bits/stdc++.h>
using namespace std;
 
long long int solve(int n,int x,vector<int>&price,vector<int>&pages){
 
// base case
vector<long long int>prev(x+1,0);
vector<long long int>curr(x+1,0);

for(int i=1;i<=n;i++){
 for(int j=1;j<=x;j++){
    long long int max_page=0;
// buying the current book
 
     if(j-price[i-1]>=0)
    max_page=max(prev[j-price[i-1]]+pages[i-1],prev[j]);
    else
    max_page=prev[j];

    curr[j]=max_page;
}

prev=curr;
}

return prev[x];
 
}
 
int main()
{
 
int n,x;
cin>>n>>x;
 
vector<int>price(n);
vector<int>pages(n);
 
for(int i=0;i<n;i++){
cin>>price[i]>>pages[i];
}
  
cout<<solve(n,x,price,pages);
 
return 0;
}
