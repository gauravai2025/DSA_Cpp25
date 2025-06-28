#include<bits/stdc++.h>
using namespace std;

        void generateStrings(int n) {
    
            vector<string>ans;
    
            for(int i=0;i<(1<<n);i++){
                string str="";
               
                for(int j=0;j<n;j++){
    
                  if(i&(1<<j))
                  str+='1';
                  else
                  str+='0';
                  }
                ans.push_back(str);
                }

           cout<<"all binary string with length: "<<n<<endl;

           for(string str:ans){
            cout<<str<<" ";
           }
            
        }
   
 
int main()
{
    int n;
    cout<<"enter length\n";
    cin>>n;

    generateStrings(n);

    return 0;
}