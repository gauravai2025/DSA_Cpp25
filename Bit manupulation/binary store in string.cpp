#include<bits/stdc++.h>
using namespace std;

string binary(int n){
    string s="";
    while(n){
        s=to_string(n%2)+s;
      //  n=n/2;
      n=n>>1;
    }
   //reverse(s.begin(),s.end());
    return s;
}
 
int main()
{
cout<<"enter number\n";

int n;
cin>>n;
cout<<binary(n)<<endl;
 
 
 
    return 0;
}