#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    if(n==1){
        cout<<"second"<<endl;
        continue;
    }

    if(n&1)
    cout<<"first"<<endl;
    else
    cout<<"second"<<endl;
}
 
    return 0;
}