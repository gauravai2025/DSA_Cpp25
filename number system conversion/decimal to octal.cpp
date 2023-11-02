
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    string octal="";
    cout<<"enter number\n";
    cin>>num;
    while(num!=0){
     int   last_digit=num%8;
     octal=to_string(last_digit)+octal;
     num=num>>3;
    }
    cout<<octal;
    return 0;
}