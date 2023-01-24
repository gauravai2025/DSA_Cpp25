#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter number\n";
    int n;
    cin>>n;
    cout<<"enter number of which divide and multiply bpower of 2\n";
    int m;
    cin>>m;
    cout<<"multiply:\n";
    long long int a=n<<m;
    cout<<a<<endl;
    cout<<"divide:\n";
    long long int b=n>>m;
    cout<<b<<endl;
    return 0;
    
}