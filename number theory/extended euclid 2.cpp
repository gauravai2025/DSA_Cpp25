
#include<bits/stdc++.h>
using namespace std;
 long long int x;
    long long int y;
void exteuclid(long long int a,long long int b){
   
    
    if(b==0){
        x=1;
        y=0;
        return ;
        
    }
    
       exteuclid(b,a%b);
      long long int xnew=y;
       long long int ynew=x-a/b*y;
        x=xnew;
        y=ynew;
}
int main() {
    long long int a;
    long long int b;
    cout<<"enter larger number\n";
    cin>>a;
    cout<<"enter smaller number\n";
       cin>>b;
     exteuclid(max(a,b),min(a,b));
       cout<<"value of x: "<<x<<endl;
         cout<<"value of y: "<<y<<endl;
  
    return 0;
}