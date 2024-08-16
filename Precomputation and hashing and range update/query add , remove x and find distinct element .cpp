#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int q;
cin>>q;
map<int,int>mp;

while(q--){
    int type;
    cin>>type;

    if(type==1){
        int x;
        cin>>x;
       mp[x]++;
    }

    else if(type==2){
        int x;
        cin>>x;
        mp[x]--;
       
        if(mp[x]==0){
            mp.erase(x);
        }

    }

    else
    cout<<mp.size()<<endl;
}

 return 0;
}