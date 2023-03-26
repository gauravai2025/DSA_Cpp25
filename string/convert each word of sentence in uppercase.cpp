#include<bits/stdc++.h>
using namespace std;
 
int main()
{
string str;
getline(cin,str);
string s="";
int t=str.size();
for(int i=0;i<t;i++){
    if(str[i]!=' ')
        s.push_back(str[i]-32); 
    
    else{
        cout<<s<<endl;
        s="";
    }
}
cout<<s<<endl;
    return 0;
}