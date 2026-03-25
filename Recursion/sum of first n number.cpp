#include<bits/stdc++.h>
using namespace std;

 
long long int findsum(long long int n){
    
    if(n==1)
    return 1;

    return n+findsum(n-1);
}

int main()
{

    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<findsum(n);
 
 
 
    return 0;
}