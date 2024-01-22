#include<bits/stdc++.h>
using namespace std;

 void search(string pat, string txt,vector <int>&ans)
        {
          
           string concat=pat+'$'+txt;
           // calculate Z value
           int size=concat.size();
           vector<int>z(size,0);
           int idx=0,cnt=0;
           
           for(int i=1;i<size;i++){
               idx=0;
               cnt=0;
               for(int j=i;j<size;j++){
                   if(concat[j]==concat[idx]){
                       cnt++;
                       idx++;
                   }
                   else
                   break;
                   
               }
               z[i]=cnt;
           }
           
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