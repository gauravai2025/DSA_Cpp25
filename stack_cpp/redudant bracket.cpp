#include<bits/stdc++.h>
using namespace std;
 bool chkredudant(string str){
    stack<char>st;

for(int i=0;i<str.size();i++){
 if(str[i]=='(' ||str[i]=='+'|| str[i]=='-' || str[i]=='*' || str[i]=='/' )
 st.push(str[i]);
 else{
    if(str[i]==')'){
          bool chk=1;
    while(st.top()!='('){
        char top=st.top();
        if(top=='+' ||top=='-' || top=='*' || top=='/' ){
            chk=0;
        }
        st.pop();
    }
    if(chk)
    return 1;
    st.pop();
    }

 }
 
}
return 0;
 }

int main()
{
cout<<"enter string to check redudant bracket\n";
string str;
cin>>str;
if(chkredudant(str))
cout<<"YES";
else
cout<<"NO";

    return 0;
}