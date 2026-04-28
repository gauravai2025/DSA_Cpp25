#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){
    long long int a,b;
    cin>>a>>b;
    long long int sum=a+b;

    if(sum%3!=0)
    cout<<"NO"<<endl;
    else{
    long long int x=sum/3;
    if(a>=x && b>=x)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}

    return 0;
}