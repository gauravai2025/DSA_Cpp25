#include<bits/stdc++.h>
using namespace std;

void lookup(int*a){
a[0]=0;
for(int i=1;i<=255;i++){
    a[i]=a[i>>1]+(i&1);
}
}
 
int main()
{
// look up table
int a[256];  // 8 bit base 256
lookup(a);
cout<<"enter number\n";
int n;
cin>>n;
int cnt=0;
for(int i=1;i<=4;i++){
cnt+=a[n&255];
n=n>>8;
}
cout<<"number of set bits are "<<cnt<<endl;

    return 0;
}