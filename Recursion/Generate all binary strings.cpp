#include<bits/stdc++.h>
using namespace std;

void generatestring(int n,int idx, vector<string>&ans,string str){

    if(idx>=n){
      ans.push_back(str);
      return ;  
    }
    
    str.push_back('0');
    generatestring(n,idx+1,ans,str);
    str.pop_back();
    
    // include 1 in string 
     if(!str.empty() && str.back()=='1')
    return ;
    
    str.push_back('1');
    generatestring(n,idx+1,ans,str);
   }
   
    void generateBinaryStrings(int num){
      vector<string>ans;
     
       generatestring(num,0,ans,""); 
       sort(ans.begin(),ans.end());
       
         cout<<"All possible binary strings of length "<<num<<" without adjacent zeros are: "<<endl;

         for(auto it:ans){
              cout<<it<<endl;

         }
    }
 
int main()
{
    int n;
    cout<<"Enter the length of binary strings: ";
    cin>>n;
    generateBinaryStrings(n);
 
    return 0;
}