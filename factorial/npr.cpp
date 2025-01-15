#include<bits/stdc++.h>
using namespace std;

 int const mod=1e9+7;
    
int permutationCoeff(int n, int k){
       
    long long int res=1;
    
    for(int i=0;i<k;i++){
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
cout<<permutationCoeff(n,k)<<endl;
 
    return 0;
}