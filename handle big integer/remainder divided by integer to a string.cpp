#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number:";
string str;
cin>>str;
cout<<"enter number divided by ";
int div;
cin>>div;
int dgt,rem=0,val;
for(int i=0;i<str.size();i++){
    if(i==0){
        dgt=str[i]-'0';
        rem=dgt%div;
    }
    else{
    dgt=str[i]-'0';
    val=rem*10+dgt;
    rem=val%div;

}
}
cout<<"remainder: "<<rem;

 
 
    return 0;
}