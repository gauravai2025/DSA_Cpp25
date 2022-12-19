#include<iostream>
using namespace std;
int no_of_setbits(int a,int b){
    int count1=0;
    while(a!=0){
        if(a&1==1)
        count1+=1;
        a=a>>1;
         }
    int count2=0;
    while(b!=0){
        if(b&1==1)
        count2+=1;
        b=b>>1;
         }
         return count1+count2;
}
int main(){
    int a,b;
    cout<<"enter positive integer\n";
    cin>>a>>b;
    cout<<no_of_setbits(a,b);
}
