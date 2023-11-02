#include<bits/stdc++.h>
using namespace std;
 
int main()
{
//cout<<"enter string to reverse\n";
string str;
cin>>str;
stack<char>st;
for(int i=0;i<str.size();i++){
    st.push(str[i]);
}
string ans="";
while(!st.empty()){
    ans+=st.top();
    st.pop();
}
cout<<"reverse string:"<<ans;

 
 
 
    return 0;
}