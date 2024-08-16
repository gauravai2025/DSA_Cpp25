#include<bits/stdc++.h>
using namespace std;


void postfixToprefix(string &str){

        stack<string>st;
        int size=str.size();

    for(int i=0;i<size;i++){

        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
            string op(1,str[i]);
            st.push(op);
        }

        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string temp=str[i]+op2+op1;
            st.push(temp);
        }
    }

    cout<<st.top();

}
 
int main()
{

string str;
cout<<"enter postfix expression: \n";
cin>>str;

postfixToprefix(str);
 
return 0;
}