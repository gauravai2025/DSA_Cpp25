#include<bits/stdc++.h>
using namespace std;


void subsequence(string str,int size){
    string ans="";
  cout<<"The subsequence are:\n";
    for(int i=1;i<(1<<size);i++){
        ans="";
        for(int j=0;j<size;j++){
         if(i&(1<<j))
         ans+=str[j];
        }
        cout<<ans<<endl;
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