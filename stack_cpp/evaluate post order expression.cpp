// Evaluate Expression
// You are given a string  S consisting of N characters. Each character is either a digit from 0 to 9 or an operator out of +, -, and *.

// Consider the string to be in reverse polish notation consisting of digits (from 
// (1 to 9) as the operands and +, -, or * as the operators and evaluate the expression.



#include <bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cout<<"enter length of expression: ";
 cin>>n;
 
 string str;
 cout<<"enter expression: ";
 cin>>str;
 
 stack<int>st;
 int ans=0;
 
 for(char ch:str){
     
     if(ch=='+' || ch=='-' || ch=='*'){
         
      int top1=st.top();
      st.pop();
      int top2=st.top();
      st.pop();
      
      int val=0;
      
      if(ch=='+')
      ans=top2+top1;
      else if(ch=='-')
      ans=top2-top1;
      else
      ans=top2*top1;
      
      st.push(ans);
     }
     
     else
     st.push(ch-'0');
 }
 
 
 cout<<"final value: "<<ans<<endl;

}
