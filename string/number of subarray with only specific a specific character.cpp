#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

    int count_substr(string s,char ch) {
        long long int ans=0;
     long long int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch)
            cnt++;
            else{
                ans+=cnt*(cnt+1)/2;
                ans=ans%mod;
                cnt=0;
            }
        }
 ans+=cnt*(cnt+1)/2;
  ans=ans%mod;
        return ans;
    }
 
int main()
{
cout<<"enter string:\n";
string str;
cin>>str;
cout<<"enter character to count subarray:\n";
char ch;
cin>>ch;
cout<<"number of substrings with only "<<ch<<" are: "<<count_substr(str,ch)<<"\n";
 
 
 
    return 0;
}