#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
int row,col;
cout<<"enter number of rows";
cin>>row;
cout<<"enter number of columns";
cin>>col;
vector<vector<ll>>arr(row,vector<ll>(col,0));
vector<vector<ll>>diffarr(row,vector<ll>(col,0));
vector<vector<ll>>presum(row+1,vector<ll>(col+1,0));


cout<<"enter initial matrix\n";

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}

int qe;
cout<<"Enter the number of queries: ";
cin>>qe;
cout<<"Enter the value of (a,b) , (c,d) and val: ";

while(qe--){

    ll a,b,c,d,val;
    cin>>a>>b>>c>>d>>val;
    diffarr[a-1][b-1]+=val;

    if(d!=col)
    diffarr[a-1][d]-=val;
    
    if(c!=row)
    diffarr[c][b-1]-=val;
    
    if(c!=row && d!=col)
    diffarr[c][d]+=val;
}

     for(int i=1;i<=row;i++){
     for(int j=1;j<=col;j++){
     presum[i][j]=diffarr[i-1][j-1]+presum[i][j-1]+presum[i-1][j]-presum[i-1][j-1];
    
}
}   

cout<<"Matrix after manipulation is: \n";

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        arr[i][j]=arr[i][j]+presum[i+1][j+1];
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 
 
 
    return 0;
}