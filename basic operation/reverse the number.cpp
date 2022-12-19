// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int i=0;
    while(1){
        cout<<(n%10);
        n=n/10;
        if(n==0)
        break; 
    }
    return 0;
}