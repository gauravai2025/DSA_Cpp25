#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   vector<int>v={4,7,8,9};
  vector<pair<int,int>>vp={{4,6},{6,8}};
//vector<int>::iterator it; drfine iterator 

 for(auto it=v.begin();it!=v.end();it++){
    cout<<(*it)<<endl;
 }

  for(auto it1=vp.begin();it1!=vp.end();it1++){
     cout<<it1->first<<" "<<it1->second<<endl;  
   
 }

 for(auto it:v){  // for any datatype vector is storing
    cout<<it<<" ";
 }
 
    return 0;
}