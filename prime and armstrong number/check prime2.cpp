#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0;
    cout<<"enter number\n";
    cin>>n;
    for(int i=2;i<=sqrt(n) ;i++){
        if(n%i==0){
        temp=1;
        break;
    }
    }
    if(temp==1)
    cout<<"not prime\n";
    else
    cout<<"prime\n";
    return 0;
}