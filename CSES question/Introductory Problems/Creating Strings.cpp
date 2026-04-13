#include<bits/stdc++.h>
using namespace std;

void permutation(string &str,set<string>&perm,int idx,int size){

    if(idx>=size){
      perm.insert(str);
      return ;
    }
    
    for(int i=idx;i<size;i++){
        swap(str[idx],str[i]);
        permutation(str,perm,idx+1,size);
        // backtrack
        swap(str[idx],str[i]);

    }
}
 
int main()
{

string str;
cin>>str;
 
 set<string>perm;
 int size=str.size();

 permutation(str,perm,0,size);

cout<<perm.size()<<endl;

 for(auto &it:perm){
    cout<<it<<endl;
 }
 
 
    return 0;
}