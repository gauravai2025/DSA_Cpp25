
#include <bits/stdc++.h>
using namespace std;

 int   pow(int a,int b){
    int ans=1;
     if(b==0)
     return 1;
    //  if(b==1)
    //  return a;
    if(b&1)
    ans*=a;
    a*=a;

  return  ans*pow(a,b/2);
    
  }
int main() {
  int a=5,b=2;
 cout<< pow(a,b);
   
    return 0;
}