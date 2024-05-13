#include<bits/stdc++.h>
using namespace std;

void  search(string pat, string txt,vector <int>&ans)
        {
           int i=0,j=0;
           int sizep=pat.size();
           int sizet=txt.size();
         
           while(i<sizet){
               
               if(pat[j]==txt[i+j])
               j++;
               
               else{
                   j=0;
                   i++;
               }
               
               if(j==sizep){
                   ans.push_back(i+1);
                   j=0;
                   i++;
               }
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