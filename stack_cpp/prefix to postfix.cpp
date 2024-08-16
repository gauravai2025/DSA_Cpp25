#include<bits/stdc++.h>
using namespace std;


void prefixTopostfix(string &str){

        stack<string>st;
        int size=str.size();

    for(int i=size-1;i>=0;i--){

        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
            string op(1,str[i]);
            st.push(op);
        }

        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string temp=op1+op2+str[i];
            st.push(temp);
        }

    }

    cout<<st.top();

}
 
int main()
{

string str;
cout<<"enter prefix expression: \n";
cin>>str;

prefixTopostfix(str);
 
return 0;
}