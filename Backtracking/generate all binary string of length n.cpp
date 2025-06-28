#include<bits/stdc++.h>
using namespace std;

        void generateStrings(int size,string str, vector<string>&ans) {
    
            if(str.size()==size){
            ans.push_back(str);
            return ;
            } 

               str.push_back('0');
               generateStrings(size,str,ans);
               
               // backtrack
               str.pop_back();
        
               str.push_back('1');
               generateStrings(size,str,ans);
        }
   
 
int main()
{
    int n;
    cout<<"enter length\n";
    cin>>n;

    vector<string>ans;

    generateStrings(n,"",ans);

    cout<<"all binary string with length: "<<n<<endl;

    for(string str:ans){
     cout<<str<<" ";
    }

    return 0;
}