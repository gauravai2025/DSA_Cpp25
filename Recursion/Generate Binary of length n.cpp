#include<bits/stdc++.h>
using namespace std;

    void  generatestring(int n,int idx, vector<string>&ans,string str){
 
     if(idx>=n){
       ans.push_back(str);
       return ;  
     }
     
     // include 1 in string 
     str.push_back('1');
     generatestring(n,idx+1,ans,str);
     str.pop_back();
 
    
      str.push_back('0');
     generatestring(n,idx+1,ans,str);
    }
 

     vector<string> validStrings(int n) {
        vector<string>ans;
      
        generatestring(n,0,ans,""); 
       
        cout<<"All possible binary strings of length "<<n<<" without adjacent zeros are: "<<endl;

        for(auto it:ans){
            cout<<it<<endl;
        }
     }

 
int main()
{
    int n;
    cout<<"Enter the length of binary strings: ";
    cin>>n;
    validStrings(n);

    return 0;
}