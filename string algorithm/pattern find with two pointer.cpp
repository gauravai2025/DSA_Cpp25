#include<bits/stdc++.h>
using namespace std;

  void search_pattern(string txt, string pat,vector<int> &ans) {
			int i=0;
			int j=0;
            int pat_size=pat.size();
			while(i<txt.size()){
				if(txt[i+j]==pat[j])
				j++;
				else{
					j=0;
					i++;
				}
				if(j==pat_size)
				ans.push_back(i);
			}
  }

 
int main()
{
string  txt;
string pat;
cout<<"enter text\n";
  getline(cin, txt);
cout<<"enter pattern\n";
  getline(cin, pat);
vector<int> ans;
search_pattern(txt,pat,ans);
cout<<"pattern found at index\n";
int size=ans.size();
if(size==0)
ans.push_back(-1);
    for(int i=0;i<size;i++)
    cout<<ans[i]<<" ";
    return 0;
}