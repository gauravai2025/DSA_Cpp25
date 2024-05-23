#include<bits/stdc++.h>
using namespace std;
const int m=1e3+10;
long long int presum[m][m]; // all element zero
long long int a[m][m];
 
int main()
{
    cout<<"enter size of 2 D array\n";
    int n;
    cin>>n;
    cout<<"enter element of array\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
             presum[i][j]=a[i][j]+presum[i][j-1]+presum[i-1][j]-presum[i-1][j-1];

    }
    }

cout<<"enter number of  query\n";
int q;
cin>>q;
while(q--){
int a,b,c,d;
cout<<"enter points or value of a,b,c,d to calculate sum\n ";
cin>>a>>b>>c>>d;
cout<<presum[c][d]-presum[a-1][d]-presum[c][b-1]+presum[a-1][b-1]<<endl;

}
    return 0;
}