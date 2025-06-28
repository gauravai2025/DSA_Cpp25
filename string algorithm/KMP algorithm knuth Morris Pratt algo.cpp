#include<bits/stdc++.h>
using namespace std;

void findlps(string &pat,vector<int>&lps){

    int size=pat.size();
    lps[0]=0;
    int i=1;
    int len=0;

    while(i<size){
      
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }

        else if(pat[i]!=pat[len]){

            if(len!=0){
           len=lps[len-1];

            }

            else{
            lps[i]=0;
            i++;    
            }
        }
    }
}

void findpattern( string &text, string &pat,vector<int>&occurences){
   
    int sizet=text.size();
    int sizep=pat.size();
    vector<int>lps(sizep,0);

    findlps(pat,lps);

    int i=0;
    int j=0;

    while(i<sizet){
      
        if(text[i]==pat[j]){
            i++;
            j++;
        }

       else if(text[i]!=pat[j]){

        if(j!=0){
            j=lps[j-1];
        }

        else{
        i++;
        }
       }

        if(j==sizep){
        occurences.push_back(i-sizep);
        j=lps[j-1];  
        } 
    }

    // for(auto ele:lps){
    //     cout<<ele<<" ";
    // }
 
}
 
int main()
{
    string text,pat;
    // cout<<"Enter the text and pattern"<<endl;
    cin>>text>>pat;

    vector<int>occurences;
    findpattern(text,pat,occurences);

    cout<<"The pattern is found at the following indices: "<<endl;

    for(auto ele:occurences){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}