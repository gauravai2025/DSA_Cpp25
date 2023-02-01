
#include <bits/stdc++.h>
using namespace std;

 void  rev(string &str,int s,int e){
    cout<<"code running.."<<str<<endl;
      if(s>=e)
      return;
      
      swap(str[s],str[e]);
       rev(str,s+1,e-1);
  }
int main() {
   cout<<"enter string\n";
   string str;
   cin>>str;
 rev(str,0,str.size()-1);
cout<<"reversed string: "<<str;

    return 0;
}