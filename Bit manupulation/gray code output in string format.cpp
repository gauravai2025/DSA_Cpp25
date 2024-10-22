#include<bits/stdc++.h>
using namespace std;

 vector<string> gray_code(int num){
         vector<string> str;
        if(num==1){
            str.push_back("0");
            str.push_back("1");
            return str;

        }
        
        vector<string>temp=gray_code(num-1);
        vector<string>reslt;

        for(int i=0;i<temp.size();i++){
            reslt.push_back("0"+temp[i]);
        }

        for(int i=temp.size()-1;i>=0;i--){
            reslt.push_back("1"+temp[i]);
        }

        return reslt;


    }



 
int main()
{
    
int n;
cin>>n;
vector<string>ans;
ans=gray_code(n);

for(auto &it:ans){
    cout<<it<<endl;
}
 
    return 0;
}