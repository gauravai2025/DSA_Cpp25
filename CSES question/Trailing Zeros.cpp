#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;

long long int ans=0;
int p5=5;

while((n/p5)!=0){
    ans+=n/p5;
    p5*=5;
}

cout<<ans<<endl;
    return 0;
}