#include<bits/stdc++.h>
using namespace std;

void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
}
 int unsetbit(int num,int pos){ // position of bit is counted from zero
        pos=1<<pos;
        pos=(~pos);
        num=num&pos;
        return num;
      
    
}
int main(){
    cout<<"enter number\n";
    int num;
    cin>>num;
    cout<<"enter position to set setbit : ";
    int pos;
    cin>>pos;
      printbinary(num);
    cout<<endl;
     printbinary(unsetbit(num,pos));
     
     return 0;
}