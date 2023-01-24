#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter number\n";
    int n;
    cin>>n;
    if(n&(n-1))
    cout<<"not power of 2\n";
    else
    cout<<"power of 2\n";
    return 0;
}