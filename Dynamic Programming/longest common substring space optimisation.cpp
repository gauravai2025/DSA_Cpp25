#include<bits/stdc++.h>
using namespace std;
 
int longestCommonSubstr(string& s1, string& s2){

    int len1=s1.size();
    int len2=s2.size();
        
    vector<int>prev(len2+1,0);
    vector<int>curr(len2+1,0);

    int mxlen=0;

    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            
        if(s1[i-1]==s2[j-1])
        curr[j]=1+prev[j-1];
        else
        curr[j]=0;
        
        mxlen=max(mxlen,curr[j]);
            
        }
     
     prev=curr;         
    }

    return mxlen;  
    }

int main()
{

string s1, s2;
cout<<"Enter the first string\n";
cin>>s1;
cout<<"Enter the second string\n";
cin>>s2;

cout<<"Length of Longest Common Substring: "<<longestCommonSubstr(s1, s2);
 
return 0;
}