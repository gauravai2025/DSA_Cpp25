#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num;
    string binstr;
    cout<<"enter number\n";
    cin>>num;
    while(num!=0){
       (num&1)==1?binstr='1'+binstr:binstr='0'+binstr;
       num=num>>1;
    }
    cout<<binstr<<endl;
    return 0;
}