#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num,rev_num=0;
    cout<<"enter number of digit ";
    cin>>n;
    cout<<"enter number ";
    cin>>num;
    while(num>0){
        int i=1;
        int last_digit=num%10;
        rev_num= rev_num+ last_digit*pow(10,n-i);
        num=num/10;
        i=i+1;
    }

if(num==rev_num)
cout<<"both are equal";
else
cout<<"not equal";

return 0;

    
}