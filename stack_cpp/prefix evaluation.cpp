#include<bits/stdc++.h>
using namespace std;
 int pre_eval(string s){
    stack<int>st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9')
        st.push(s[i]-'0');
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
            cout<<"invalid operator";
                break;
            }
        }
    }
    return st.top();
 }

int main()
{
cout<<"enter the prefix expression supporting only +,-,*,/ ,^  and operand value between 0 to 9:  \n";
string s;
cin>>s;

cout<<"value of given prefix expression\n"<<pre_eval(s);
 
 
    return 0;
}
// limitaion of this code is that it only support single digit operand and positive operand
// each chracter is considered as operator or operand