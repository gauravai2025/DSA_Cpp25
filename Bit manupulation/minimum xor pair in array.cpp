#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   
int n;
cin>>n;
vector<int> v(n);

for(int i=0;i<n;i++)
cin>>v[i];

sort(v.begin(),v.end());
int mnxor=INT_MAX;
int pr1,pr2;

for(int i=1;i<n;i++){
    if((v[i]^v[i-1])<mnxor){
        mnxor=v[i]^v[i-1];
        pr1=v[i-1];
        pr2=v[i];
    }
}
 
 cout<<mnxor<<endl;
    
 
    return 0;
}