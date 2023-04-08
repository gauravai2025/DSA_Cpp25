#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number\n";
int n;
cin>>n;
int cnt=0;
if(n==0)
cout<<n;
else{
while(n!=0){
    if(n^1)  // if(n^0)
    cnt++;  
    n=n>>1;
      // time copmlexity o(logn)
} 

cout<<cnt;

}
 
 
 
    return 0;
}