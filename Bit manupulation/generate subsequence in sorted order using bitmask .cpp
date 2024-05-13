#include<bits/stdc++.h>
using namespace std;


void subsequence(string str,int size){
    string ans="";
    vector<string>res;
  cout<<"The subsequence are:\n";
    for(int i=1;i<(1<<size);i++){
        ans="";
        for(int j=0;j<size;j++){
         if(i&(1<<j))
         ans+=str[j];
        }
        res.push_back(ans);
    }
    sort(res.begin(),res.end());
    for(auto it:res){
        cout<<it<<endl;
    }
}
 
int main()
{
string str;
cout<<"Enter the string"<<endl;
cin>>str;
int size=str.size();
 subsequence(str,size);
 
    return 0;
}