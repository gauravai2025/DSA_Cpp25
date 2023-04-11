#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
}
 int flip_setbit(int num,int pos){ // position of bit is counted from zero
        pos=1<<pos;
        num=num^pos;
        return num;
}
int main(){
    cout<<"enter number\n";
    int num;
    cin>>num;
    cout<<"enter position to flip bit : ";
    int pos;
    cin>>pos;
    printbinary(num);
    cout<<endl;
     printbinary(flip_setbit(num,pos));
     return 0;
}