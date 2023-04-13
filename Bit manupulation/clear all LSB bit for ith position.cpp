#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
}
 int clear_setbit(int num,int pos){ // position of bit is counted from zero
        // pos=1<<pos+1;
        // pos=pos-1;
        // pos=~pos;
        // num=num&pos;
        num=num&(~((1<<pos+1)-1));
        return num;
}
int main(){
    cout<<"enter number\n";
    int num;
    cin>>num;
    cout<<"enter position to unset LSB : ";
    int pos;
    cin>>pos;
    printbinary(num);
    cout<<endl;
     printbinary(clear_setbit(num,pos));
     return 0;
}