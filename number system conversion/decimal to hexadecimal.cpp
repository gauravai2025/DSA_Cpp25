#include<bits/stdc++.h>
using namespace std;
 
int main()
{

cout<<"enter decimal number\n";
long long int num;
cin>>num;
unordered_map<int,char>mp;
mp[10]='A';
mp[11]='B';
mp[12]='C';
mp[13]='D';
mp[14]='E';
mp[15]='F';

string hexadec="";

while(num!=0){
    int last_dgt=num%16;
    if(last_dgt<=9)
    hexadec=to_string(last_dgt)+hexadec;
    else
    hexadec=mp[last_dgt]+hexadec;
    num=num>>4;
}
 cout<<"hexadecimal number is "<<hexadec<<"\n";
 
 
    return 0;
}