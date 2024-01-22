#include<bits/stdc++.h>
using namespace std;

void z_function(string s,vector <int>&z) {
    int n = s.size();
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    
}

 void search(string pat, string txt,vector <int>&ans)
        {
           string concat=pat+'$'+txt;
          
           int size=concat.size();
           vector<int>z(size,0);
            // calculate Z value
          z_function(concat,z);
          int sizep=pat.size();
           
             for(int i=0;i<size;i++){
                 if(z[i]==sizep)
                 ans.push_back(i-sizep);
             }
            
        }
    

int main()
{
string txt,pat;
vector <int> ans;
cout<<"Enter the text "<<endl;
cin>>txt;
cout<<"Enter the pattern "<<endl;
cin>>pat;
search(pat,txt,ans);
cout<<"The pattern is found at "<<endl;

for(int i=0;i<ans.size();i++){
cout<<ans[i]<<" ";
}

    return 0;
}