#include<bits/stdc++.h>
using namespace std;

  long long int evalpost(vector<string>& tokens) {
        stack<int> s;

        for(int i=0; i<tokens.size(); i++){
            string x = tokens[i];
            
            if(x=="+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a+b);
            }
            else if(x=="-"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b-a);
            }
            else if(x=="*"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(a*b);
            }
            else if(x=="/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b/a);
            }
            else if(x=="^"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(pow(b,a));
            }
            else{
                s.push(stoi(x));
            }
        }

        return s.top();
  }
 
int main()
{
    int t;
    cout<<"enter number of terms in expression including operator and operand\n";
cin>>t;
cout<<"enter the prefix expression supporting only +,-,*,/ ,^  and operand value between 0 to 9:  \n";
cout<<"enter expression in form vector of string\n";
vector<string>exp;
string s;

while(t--){
cin>>s;

exp.push_back(s);
}

// cout<<"enter number of operator in prefix expression \n";
//  cout<<"enter operator in prefix expression \n";
// unordered_set<char>sop;
cout<<"value of given prefix expression:\n"<<evalpost(exp);
 
 
    return 0;
}