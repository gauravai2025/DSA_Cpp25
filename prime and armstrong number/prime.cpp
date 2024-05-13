#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cout<<"enter number\n";
    cin>>n;
    for(int i=1;i<=n ;i++){
        if(n%i==0){
        cnt++;
       
    }
    }
    
    if(cnt==2)
    cout<<" prime\n";
    else
    cout<<"not prime\n";
    return 0;
}