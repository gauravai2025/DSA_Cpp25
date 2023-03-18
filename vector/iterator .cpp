#include<bits/stdc++.h>
using namespace std;
 
int main()
{
vector<int>v={4,7,8,9};
// vector<int>::iterator it=v.begin(); // define iterator it stores address of first element of vector

vector<pair<int,int>>vp={{4,6},{6,8}};
vector<int>::iterator it;
 for(it=v.begin();it!=v.end();it++){
    cout<<(*it)<<endl;
 }

 vector<pair<int,int>>::iterator it1=vp.begin();

  for(;it1!=vp.end();it1++){
    //  cout<<it1->first<<" "<<it1->second<<endl;  
    cout<<(*it1).first<<" "<<(*it1).second<<endl;
 }
 
 
    return 0;
}