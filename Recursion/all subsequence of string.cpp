#include<bits/stdc++.h>
using namespace std;
void subsequence(string str,string otpt,int idx,vector<string>&ans){
//base case
if(idx>=str.length()){
    ans.push_back(otpt);
    return;
}

//exclude
subsequence(str,otpt,idx+1,ans);
//include
otpt.push_back(str[idx]);
subsequence(str,otpt,idx+1,ans);


}
 
int main()
{
    cout<<"enter string\n";
   string str;
   cin>>str;

 string otpt="";
 int idx=0;
 vector<string>ans;
 subsequence(str,otpt,idx,ans);
 
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<endl;
 }
    return 0;
}