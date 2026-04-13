#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;

if( n>1 && n<=3)
cout<<"NO SOLUTION"<<endl;

else{
int val=n;

if(n%2==0)
n--;

while(n>0){
    cout<<n<<" ";
    n-=2;
}

if(val&1)
val--;

while(val>0){
    cout<<val<<" ";
    val-=2;
}
}

 
    return 0;
}