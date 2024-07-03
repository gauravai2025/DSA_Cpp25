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
             

    }
    }

cout<<"enter number of  query\n";
int q;
cin>>q;
while(q--){
int a,b,c,d;
cout<<"enter points or value of a,b,c,d to calculate sum\n ";
cin>>a>>b>>c>>d;
long long int ans=0;
a--; b--; c--; d--;
for(int i=a;i<=c;i++){
    for(int j=b;j<=d;j++){
        ans+=a[i][j];
    }
}
cout<<ans<<endl;
}
    return 0;
}