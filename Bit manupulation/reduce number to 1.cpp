#include<bits/stdc++.h>
using namespace std;
 // defined opration are:
    // 1. num=num/2 if num is even
    // 2. add 1 or subtract 1 from num if num is odd
int min_step(long num){
    int cnt=0;
    while(num>1){
        if(num&1){
            if(num==3)
            num-=1;
            else{
            if(num&3==1)  // num%4==1
            num-=1;
            else
            num+=1;
        }
        }
        else
        num=num>>1;
        cnt++;
    }
    return cnt;
}
 
int main()
{
cout<<"enter the number";
int num;
cin>>num;
cout<<"minimum step :"<<min_step(num);
    return 0;
}