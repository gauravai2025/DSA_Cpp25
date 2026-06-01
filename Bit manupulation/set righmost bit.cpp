#include<bits/stdc++.h>
using namespace std;

int setBit(int n) {
    
    //     int pos=-1;
    
    //     for(int i=0;i<64;i++){
            
    //     if((n&(1<<i))==0){  // ith bit unset
    //     pos=i;
    //     break; 
    //     }
    //     }
        
    //   n|= 1<<pos;
        
    // return n;

    // short method
    n=n|(n+1);
    return n;
}
 
int main()
{
    int n;
    cout<<"enter number: \n";
    cin>>n;
    cout<<setBit(n);
    return 0;
}