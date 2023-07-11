#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);   // binary in 32 bit
    }
    // while(num){
    //     cout<<(num&1);
    //     num=num>>1;
    // }
}
int main(){
    cout<<"enter number\n";
    int n;
    cin>>n;
     printbinary(n);
     return 0;
}