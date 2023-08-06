#include<bits/stdc++.h>
using namespace std;

int roman_to_int(string s){
    unordered_map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int ans=0;
    int len=s.size();
        for(int i=0;i<len;i++){
            if(i==len-1)
            ans+=mp[s[i]];
            else{
            if(mp[s[i]]<mp[s[i+1]])
            ans-=mp[s[i]];
            else
               ans+=mp[s[i]];
            }

        }
        return ans;

}
 
int main()
{
cout<<"enter srting of roman number\n";
string s;
cin>>s;
cout<<"integer number is : "<<roman_to_int(s)<<"\n";
 
 
 
    return 0;
}