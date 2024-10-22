#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n,m;
cin>>n>>m;

multiset<int>pt;
vector<int>pc(n,0);

for(int i=0;i<n;i++){
    int x;
    cin>>x;
   pt.insert(x);
}


vector<int>ans;

while(m--){
    int x;
    cin>>x;
   auto  it=pt.upper_bound(x);

if(it==pt.begin())
ans.push_back(-1);

else{
    it--;
    ans.push_back(*it);
    pt.erase(it);

}

}

for(auto it:ans){
    cout<<it<<endl;
}
 
    return 0;
}