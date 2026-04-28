#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int t;
 cin>>t;
while(t--){
   long long int x,y;
   cin>>x>>y;
    long long int ans=0;

   if(x>=y){
    ans=(x-1)*(x-1);

     if(x&1){
       ans+=y;
     }
     else{
       ans=ans+x+x-y;
     }
   }


else{
  ans=(y-1)*(y-1);

    if(y&1){
     ans=ans+y+y-x;
     }

     else{
       ans=ans+x;
     }

}
cout<<ans<<endl;
}
    return 0;
}