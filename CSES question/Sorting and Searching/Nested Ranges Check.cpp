#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int>&a,vector<int>&b){

    if(a[0]==b[0])
    return a[1]>b[1];

    return a[0]<b[0];
}
 
int main()
{

    int n;
    cin>>n;
    vector<vector<int>>intv;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        intv.push_back({x,y,i});
    }
    
    vector<int>ans1(n,0);
    vector<int>ans2(n,0);


    sort(intv.begin(),intv.end(),cmp);
    
    int mxend=intv[0][1],mnend=intv[n-1][1];

    for(int i=1;i<n;i++){

       if(intv[i][1]<=mxend)
       ans2[intv[i][2]-1]=1;
       
     mxend=max(mxend,intv[i][1]);

    }
    for(int i=n-2;i>=0;i--){

       if(intv[i][1]>=mnend)
       ans1[intv[i][2]-1]=1;
       
     mnend=min(mnend,intv[i][1]);

    }

    for(int i=0;i<n;i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<ans2[i]<<" ";
    }

    return 0;
}