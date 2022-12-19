// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    // Write C++ code here
    int a,b,i;
    cin>>a>>b;
    int k=max(a,b);
    int j=min(a,b);
    
        while(j<=k){
            for(i=2;i<j;i++){
                if(j%i==0)
                break;
            }
            if(i==j)
            cout<<j<<" ";
        j=j+1;
    }

    return 0;
}