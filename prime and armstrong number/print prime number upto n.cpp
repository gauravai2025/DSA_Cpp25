// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,j=2;
    int i;
    cin>>n;
    while(j<=n){
        for( i=2;i<j;i++){
            if(j%i==0){  
                break;  
            }
        }
        if(i==j)
            cout<<j<<endl;
            j=j+1;
    }
    
    return 0;
}