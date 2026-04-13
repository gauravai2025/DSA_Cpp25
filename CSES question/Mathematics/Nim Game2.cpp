#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int a[n];
    int xorval=0;

for(int i=0;i<n;i++){
    cin>>a[i];
    xorval^=(a[i]%4);
    }

    if(xorval)
    cout<<"first"<<endl;
    else
    cout<<"second"<<endl;
}
 
    return 0;
}