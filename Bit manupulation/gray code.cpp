#include<bits/stdc++.h>
using namespace std;

 vector<string> sol(int num){
         vector<string> str;
        if(num==1){
            str.push_back("0");
            str.push_back("1");
            return str;

        }
        
        vector<string>temp=sol(num-1);
        vector<string>reslt;

        for(int i=0;i<temp.size();i++){
            reslt.push_back("0"+temp[i]);
        }

        for(int i=temp.size()-1;i>=0;i--){
            reslt.push_back("1"+temp[i]);
        }

        return reslt;


    }


void gray_code(int num,vector<int>&ans){

          vector<string>reslt=sol(num);
        int size=reslt.size();
        for(int i=0;i<size;i++){
            int val=0;
            reverse(reslt[i].begin(),reslt[i].end());
          for(int j=0;j<reslt[i].size();j++){
              if(reslt[i][j]=='1')
              val^=(1<<j);
          }
          ans.push_back(val);
        }
}

 
int main()
{
cout<<"enter number\n";
int n;
cin>>n;
vector<int>ans;
gray_code(n,ans);

for(auto &it:ans){
    cout<<it<<" ";
}
 
    return 0;
}