#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
 vector<vector<int>>v;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
}
map<int,int>vc;
map<int,int>hz;

 for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
        if(v[i][0]==v[j][0]){
            vc[abs(v[i][1]-v[j][1])]++;
        }
     }
 }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i][1]==v[j][1]){
                hz[abs(v[i][0]-v[j][0])]++;
            }
        }
    }

    int maxh=0,maxv=0;

    for(auto it:vc){
     if(it.second>=2)
    maxv=max(maxv,it.first);
    }


    for(auto it:hz){
    if(it.second>=2)
     maxh=max(maxh,it.first);
    }

  int minh=INT_MAX,minv=INT_MAX;

  for(auto it:vc){
     if(it.second>=2)
    minv=min(minv,it.first);
    }


    for(auto it:hz){
    if(it.second>=2)
     minh=min(minh,it.first);
    }

cout<<(1ll*maxh*maxv)-(1ll*minh*minv)<<endl;
    return 0;
}