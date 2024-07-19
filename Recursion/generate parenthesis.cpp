#include<bits/stdc++.h>
using namespace std;
 

 void generate(int open,int close,vector<string>&ans,string &str){

        // base case

        if(open==0 && close==0){
            ans.push_back(str);
            return ;
        }
   
     // insert opening bracket
        if(open>0){
            str.push_back('(');
            generate(open-1,close,ans,str);
            str.pop_back();
        }

        if(close>0 && open<close){
             str.push_back(')');
            generate(open,close-1,ans,str);
            str.pop_back();
        }

    }
    

    vector<string> generateParenthesis(int n) {

        vector<string>ans;
        string str="";
        generate(n,n,ans,str);
        return ans;

        
    }

int main()
{

int n;
cout<<"Enter the number of opening brackets: \n";
cin>>n;

vector<string>ans=generateParenthesis(n);

 
 
 
    return 0;
}