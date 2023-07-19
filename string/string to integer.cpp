
#include <bits/stdc++.h>
using namespace std;

int stint(string s){
    int val=0;
    if(s[0]!='-')    
    val=s[0]-'0';                                           
              
                  for(int j=1;j<s.size();j++){
                         val=(val*10)+s[j]-'0';
             }
             if(s[0]=='-')
             val=-val;
      return val;

}
int main()
{
    cout<<"enter string\n";
    string s;
    cin>>s;
     int val=stoi(s); //string to integer inbuilt function
     cout<<val<<endl;
cout<<stint(s);
   val=stol(s); //string to long long integer inbuilt function
     cout<<val<<endl;
        val=stoul(s); //string to unsigned long long integer inbuilt function
     cout<<val<<endl;
    return 0;
}
