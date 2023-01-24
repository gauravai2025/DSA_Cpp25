#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
}
int main(){
    cout<<"enter number\n";
    int n;
    cin>>n;
     printbinary(n);
     return 0;
}