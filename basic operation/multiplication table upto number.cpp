// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int n, j=1;

int main() {
    // Write C++ code here
    cin>>n;
    while(j<=n){
        for(int i=1;i<=10;i++){
            int mlt=j*i;
            cout<<j<<'*'<<i<<"= "<<mlt<<endl;
        }
              j=j+1;
        
    }


    return 0;
}