#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter negative num\n";
    cin>>n;
    n=abs(n);
    int binum=0;
    while(n!=0){
        int i=0;
        int digit=n&1;
        digit=~digit;
     binum+=digit*pow(10,i);


    }
    binum=binum+1;
cout<<binum;
    return 0;
}