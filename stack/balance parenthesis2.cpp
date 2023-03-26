#include<bits/stdc++.h>
using namespace std;
bool valid(string str){
    unordered_map<char,int>symbols={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
    stack<char>st;

    for(int i=0;i<str.size();i++) {
        if(symbols[str[i]]<0)
        st.push(str[i]);
        else{
            if(st.empty())
            return 0;
            char ch=st.top();
             st.pop();
            if(symbols[str[i]]+symbols[ch]!=0)
            return 0;
            
           
        }

    }
    if(st.empty())
    return 1;
    else
    return 0;
}
 
int main()
{
stack<char>s;
// cout<<"enter string of parenthesis\n";
string str;
cin>>str;
cout<<valid(str);
// cout<<"Yes\n";
// else
// cout<<"No\n";
    return 0;
}