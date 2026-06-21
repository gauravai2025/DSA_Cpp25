#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    string str;
    cin>>str;
    n=str.size();
    map<string,bool>mp;
    long long int cnt=0;

    for(int i=0;i<n;i++){
        string s="";
        for(int j=i;j<n;j++){
            s+=str[j];
            if(mp.count(s)==0){
             cnt++;
             mp[s]=1;   
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}