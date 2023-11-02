
#include<bits/stdc++.h>
using namespace std;

int hexadecimal_decimal(string hexa){
   long long  int pow16=1,decimal=0;
    int size=hexa.size();

unordered_map<char,int>mp;
mp['A']=10;
mp['B']=11;
mp['C']=12;
mp['D']=13;
mp['E']=14;
mp['F']=15;
mp['1']=1;
mp['0']=0;
mp['2']=2;
mp['3']=3;
mp['4']=4;
mp['5']=5;
mp['6']=6;
mp['7']=7;
mp['8']=8;
mp['9']=9;

    for(int i=(size-1);i>=0;i--){
     int last_digit=mp[hexa[i]];
     decimal=decimal+last_digit*pow16;
        pow16=pow16<<4;
  
    }
    
    return decimal;
}



int main(){
string hexa;
cout<<"enter hexadecimal number";
cin>>hexa;
cout<<"decimal number is \n";
cout<<hexadecimal_decimal(hexa);
return 0;

}