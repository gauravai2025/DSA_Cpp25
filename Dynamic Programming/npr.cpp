#include<bits/stdc++.h>
using namespace std;

int const mod=1e9+7;

long long int nPr(int n,int r){
    
    long long int res=1;
    
    for(int i=0;i<r;i++){
        res*=(n-i);
        res%=mod;
    }
    
    return res;
}
 
int main()
{

int n,k;
cout<<"enter n and r"<<endl;
cin>>n>>k;

cout<<"nPr is : "<<endl;
cout<<nPr(n,k)<<endl;
 
return 0;
}