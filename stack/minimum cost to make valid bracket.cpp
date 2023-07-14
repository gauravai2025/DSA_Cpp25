#include<bits/stdc++.h>
using namespace std;
 int minimum_cost(string str){
    if(str.size()&1)
    return -1;
   stack<char>st;
   int cntc=0,cnto=0;
   for(int i=0;i<str.size();i++){
    if(str[i]=='{')
    st.push(str[i]);
    else{
if(st.empty())
cntc++;
else
st.pop();
    }
   }
   while(!st.empty()){
    cnto++;
    st.pop();
   }
//  if(cntc==0 || cnto==0)
//    return (cntc+cnto)/2;
//    else{
//     if(cntc&1)
//     return cntc+1;
//     else
//     return cntc;
  return (cntc+1)/2+(cnto+1)/2;
   }
 

int main()
{
cout<<"enter string to check redudant bracket\n";
string str;
cin>>str;
 cout<<"cost:"<<minimum_cost(str);
 
 
    return 0;
}