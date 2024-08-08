#include<bits/stdc++.h>
using namespace std;


void postfixToinfix(string &str){

    stack<string> st;
    int size = str.size();

    for (int i = 0; i < size; i++) {
        // If the character is an operand
        if (isalnum(str[i])) {
            st.push(string(1, str[i]));
        } 
        // If the character is an operator
        else {
            if (st.size() < 2) {
                // Handle invalid input case
                cout<<"Invalid input";
                return ;
            }
            string str2 = st.top();
            st.pop();
            string str1 = st.top();
            st.pop();

    // string exp = "(" + str1 + str[i] + str2 + ")";  // copying of string tle O(n)
            st.push('('+str1+str[i]+str2+')');
        }
    }

    // The final expression should be in the stack
    if (st.size() != 1) {
         cout<<"Invalid input";
         return ;
    }

    cout<<st.top();

}
 
int main()
{

string str;
cout<<"enter postfix expression: \n";
cin>>str;

postfixToinfix(str);
 
return 0;
}