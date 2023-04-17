#include<bits/stdc++.h>
using namespace std;
 char getMaxOccuringChar(string str)
    {
        map<char,int>mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        int max=-1;
        char ch;
        for(auto &it:mp){
            if(it.second>max){
            ch=it.first;
            max=it.second;
            }
        }
        return ch;
    }

 
int main()
{
cout<<"enter string : ";
string str;
cin>>str;
cout<<getMaxOccuringChar(str);
 
 
 
    return 0;
}