#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
int mx=0;
vector<int> v(1e6+1,0);
int x;

for(int i=0;i<n;i++){
    cin>>x;
    mx=max(mx,x);
    v[x]++;
}
int cnt=0;


for(int gcdp=mx;gcdp>=1;gcdp--){
     cnt=0;
    for(int j=gcdp;j<=mx;j+=gcdp){
        cnt+=v[j];
        
    }
 if(cnt>=2){
cout<<gcdp<<endl;
return 0;
 }

 }
 
 
    return 0;
}