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

   for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int i;
    for( i=0;i<n;i++){
        if(a[i]==1)
        cout<<a[i]<<" ";
        else
        break;
    }

 if(n-i==2  && a[i]==2 && a[i+1]==3){
    cout<<a[i]<<" "<<a[i+1]<<endl;
   
 }

 else{
    
    for( int j=n-1;j>=0;j--){
        if(a[j]!=1)
        cout<<a[j]<<" ";
    }
    cout<<endl;
 }
}
    return 0;
}