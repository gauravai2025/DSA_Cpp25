#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

    int count_substr(string s) {
        long long int ans=0;
     long long int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
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
cout<<"number of substrings with only 1's are: "<<count_substr(str)<<"\n";
 
 
 
    return 0;
}