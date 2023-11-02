
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num=0;
    string octal="";
    cout<<"enter octal number\n";
    cin>>octal;
    int size=octal.size();
    long long int pow8=1;

    for(int i=size-1;i>=0;i-- ){
     int last_digit=octal[i]-'0';
    num=num+last_digit*pow8;
    pow8=pow8<<3;
    }

    cout<<num;
    return 0;
}