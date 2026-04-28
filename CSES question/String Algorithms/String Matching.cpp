#include<bits/stdc++.h>
using namespace std;
 

void findAnagrams(string &txt, string &pat, vector<int>&ans) {

    vector<int>hashpt(26,0);
    vector<int>hashtx(26,0);
    
    int sizept=pat.size();
    int sizetx=txt.size();
	    
    if(sizept>sizetx)
    return ;

    for(int i=0;i<sizept;i++){
        hashpt[pat[i]-'a']++;
        hashtx[txt[i]-'a']++;
        
    }
    
 int left=0;
    
    if(hashpt==hashtx)
    ans.push_back(0);
    
    for(int i=sizept;i<sizetx;i++){
        hashtx[txt[left]-'a']--;
        hashtx[txt[i]-'a']++;
        left++;
    if(hashpt==hashtx)
    ans.push_back(left);
}

	   
 }


int main()
{

string txt,pat;
cin>>txt>>pat;

vector<int>ans;

findAnagrams(txt,pat,ans);

cout<<ans.size();

 return 0;
}