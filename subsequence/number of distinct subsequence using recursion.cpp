#include<bits/stdc++.h>
using namespace std;

void generatesubsequence(int idx,string &str,set<string>&st,string otpt){
      
    if(idx>=str.size()){
      st.insert(otpt); 
      return;
    }
     
    //include
     otpt.push_back(str[idx]);
    generatesubsequence(idx+1,str,st,otpt);
    
    // backtrack
    otpt.pop_back();
    generatesubsequence(idx+1,str,st,otpt);
     
 }
 
int main()
{
    string str;
    cout<<"enter string\n";
    cin>>str;
    set<string>st;

    generatesubsequence(0,str,st,"");

    cout<<"number of distinct subsequence: "<<st.size();

    return 0;
}