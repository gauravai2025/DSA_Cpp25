
#include <bits/stdc++.h>
using namespace std;

 bool  rev(string &str,int s,int e){
    cout<<"code running: "<<str<<endl;
      if(s>=e)
      return 1;
      
      if(str[s]!=str[e])
      return 0;
       rev(str,s+1,e-1);
  }
int main() {
   cout<<"enter string\n";
   string str;
   cin>>str;
 if(rev(str,0,str.size()-1))
 cout<<" palindrome\n";
 else
 cout<<"not palindrome";
    return 0;
}