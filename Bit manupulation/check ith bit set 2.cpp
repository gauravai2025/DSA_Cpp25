#include<bits/stdc++.h>
using namespace std;
 void check_setbit(int num,int pos){ // position of bit is counted from zero
        pos=1<<pos;
        if((num&pos))
        cout<<pos<<"th bit is set";
        else
       cout<<pos<<"th bit is unset";
    
}
int main(){
    cout<<"enter number\n";
    int num;
    cin>>num;
    cout<<"enter position to check setbit : ";
    int pos;
    cin>>pos;
     check_setbit(num,pos);
     return 0;
}