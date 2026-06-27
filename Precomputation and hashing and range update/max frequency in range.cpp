#include<bits/stdc++.h>
using namespace std;
 
// Given a string S of size N and Q queries. Every query consists of L and R 
// ( 0 < = L < = R < N ) . The task is to print the character that occurs the maximum number of times
//  in the given range. If there are multiple characters that occur maximum number of times then print
//   the lexicographically smallest of them.

// Note: S consists of lowercase English letters.

int main()
{
    string str;
    cout<<"enter string: ";
    cin>>str;
    
    int size=str.size();
    vector<vector<int>>prefeq(26,vector<int>(size,0));

    for(int i=0;i<size;i++){
        for(char ch='a';ch<='z';ch++){
        if(i!=0)
        prefeq[ch-'a'][i]=prefeq[ch-'a'][i-1];
        }
        
       prefeq[str[i]-'a'][i]++;
    }

    int q;
    cout<<"enter number of queries: ";
    cin>>q;

   cout<<"enter range to find maxfeq:\n";

   while(q--){
   int l,r;
   cin>>l>>r;
   int ans=0;
   char ansch='0';
   for(char ch='a';ch<='z';ch++){
    int feq=prefeq[ch-'a'][r];

    if(l>0)
    feq-=prefeq[ch-'a'][l-1];
     
    if(ans<feq){
    ans=max(ans,feq);
    ansch=ch;
   }
}
   cout<<ansch<<" "<<ans<<endl;
   }
    return 0;
}