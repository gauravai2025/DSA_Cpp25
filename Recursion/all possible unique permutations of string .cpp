#include<bits/stdc++.h>
using namespace std;

void solve(int index,string s,vector<string>&ans,unordered_set<string>&st){
        if(index>=s.size()){
            if(st.count(s)==0){
                st.insert(s);
                ans.push_back(s);
            }
            return ;
        }
        
        for(int i=index;i<s.size();i++){
            swap(s[index],s[i]);
          solve(index+1,s,ans,st);
          // backtrack
           swap(s[index],s[i]);
        }
    }

void  findPermutations(string &s , vector<string>&ans) {
    
    int index=0;
    unordered_set<string>st;
 solve(index,s,ans,st);
     

}
 
int main()
{
    cout<<"enter string\n";
    string str;
    cin>>str;
    vector<string>ans;
    findPermutations(str,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}