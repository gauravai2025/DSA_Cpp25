#include<bits/stdc++.h>
using namespace std;

// approach 1

// string preToInfix(string &str) {
//     reverse(str.begin(),str.end());
//        stack<string> st;
//     int size = str.size();

//     for (int i = 0; i < size; i++) {
//         // If the character is an operand
//         if (isalnum(str[i])) {
//             st.push(string(1, str[i]));
//         } 
//         // If the character is an operator
//         else {
//             if (st.size() < 2) {
//                 // Handle invalid input case
//                 return "Invalid input";
//             }
//             string str2 = st.top();
//             st.pop();
//             string str1 = st.top();
//             st.pop();

//              st.push('(' + str1 + str[i] + str2 +')');
          
//         }
//     }

//     // The final expression should be in the stack
//     if (st.size() != 1) {
//         return "Invalid input";
//     }

//     string infix= st.top();
//     reverse(infix.begin(),infix.end());
    
//     for(int i=0;i<infix.size();i++){
        
//         if(infix[i]=='(')
//         infix[i]=')';
        
//        else if(infix[i]==')')
//        infix[i]='(';
//     }
//        return infix;
    
//     }



// approach 2

string preToInfix(string &str) {
       stack<string> st;
    int size = str.size();

    for (int i =size-1; i>=0; i--) {
        // If the character is an operand
        if (isalnum(str[i])) {
            st.push(string(1, str[i]));
        } 
        // If the character is an operator
        else {
            if (st.size() < 2) {
                // Handle invalid input case
                return "Invalid input";
            }
            string str2 = st.top();
            st.pop();
            string str1 = st.top();
            st.pop();

             st.push('(' + str2 + str[i] + str1 +')');
          
        }
    }

    // The final expression should be in the stack
    if (st.size() != 1) {
        return "Invalid input";
    }

    string infix= st.top();
    
   
    return infix;
    
    }
 
int main()
{

string str;
cout<<"enter prefix expression\n";
cin>>str;
cout<<preToInfix(str);

    return 0;
}