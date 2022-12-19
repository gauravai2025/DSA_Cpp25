#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,binum=0,i=0;
    cout<<"enter number\n";
    cin>>n;
    while(n!=0){
       int  digit=n&1;
       binum+=digit*pow(10,i);
       n=n>>1;
i++;
    }
    cout<<binum;
    return 0;
}