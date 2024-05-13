#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){
    int w,h,n;
    cin>>w>>h>>n;
    int x,y;
   vector<int>vx,vy;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        vx.push_back(x);
        vy.push_back(y);
    }

 int maxx=0,maxy=0;
sort(vx.begin(),vx.end());
sort(vy.begin(),vy.end());

 for(int i=1;i<n;i++){
    maxx=max(maxx,(vx[i]-vx[i-1]-1));
    maxy=max(maxy,(vy[i]-vy[i-1]-1));
 }
if(n){
 maxx=max(maxx,max((w-vx[n-1]),(vx[0]-1)));
 maxy=max(maxy,max((h-vy[n-1]),(vy[0]-1)));
}
else{
 maxx=w;
 maxy=h;
}

  cout<<1ll*maxx*maxy<<endl;

}
    return 0;
}