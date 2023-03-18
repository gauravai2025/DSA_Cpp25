#include<bits/stdc++.h>
using namespace std;
 void printv(vector<pair<int,int>>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//  }
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }
 }
int main()
{
vector<pair<int,int>>v3; 
vector<pair<int,int>>v;  // vector of pair each index contains a pair;
 v={{2,5},{6,8},{7,9}}; // input of vector
 vector<pair<int,int>>v2={{2,5},{6,8},{7,9}}; // input of vector
int x,y;
  for(int i=0;i<2;i++){   // input in loop
    // cin>>v3[i].first>>v3[i].second; // wrong way to input
    cin>>x>>y;
    //v.push_back(make_pair(x,y));
       v3.push_back({x,y});
    
  }
pair<int,int>p={10,45};
v.push_back(p);

 printv(v3);
 
    return 0;
}