#include<bits/stdc++.h>
using namespace std;

int distinctsubsequence(string &str){
        
    int size=str.size();
    vector<int>dp(size+1,0);
    dp[0]=1;
    
vector<int>lastvisit(26,-1);
    
for(int i=1;i<=size;i++)
{
    dp[i]=2*dp[i-1];
    
    if(lastvisit[str[i-1]-'a']!=-1){
    int idx=lastvisit[str[i-1]-'a'];
    dp[i]-=dp[idx-1];
    }

    lastvisit[str[i-1]-'a']=i;
} 

return dp[size];

}

int main()
{
    string str;
    cout<<"enter string\n";
    cin>>str;

    cout<<"number of distinct subsequence: "<<distinctsubsequence(str);
    return 0;
}