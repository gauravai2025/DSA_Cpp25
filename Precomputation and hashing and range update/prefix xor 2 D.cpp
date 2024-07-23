#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int main()
{
    cout<<"enter size of 2 D array\n";
    int row,col;
    cin>>row>>col;

        vector<vector<ll>>mat(row,vector<ll>(col,0));
       vector<vector<ll>>presum(row+1,vector<ll>(col+1,0));

    cout<<"enter element of array\n";
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cin>>mat[i-1][j-1];
             presum[i][j]=mat[i-1][j-1]^presum[i][j-1]^presum[i-1][j]^presum[i-1][j-1];

    }
    }

cout<<"enter number of  query\n";
int q;
cin>>q;
while(q--){
int a,b,c,d;
cout<<"enter points or value of a,b,c,d to calculate sum\n ";
cin>>a>>b>>c>>d;
cout<<(presum[c][d]^presum[a-1][d]^presum[c][b-1]^presum[a-1][b-1])<<endl;

}
    return 0;
}