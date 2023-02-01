
#include <bits/stdc++.h>
using namespace std;

 int   pow(int a,int b){
     if(b==0)
     return 1;
    //  if(b==1)
    //  return a;

  return  a*pow(a,b-1);
    
  }
int main() {
  int a=5,b=6;
 cout<< pow(a,b);
   
    return 0;
}