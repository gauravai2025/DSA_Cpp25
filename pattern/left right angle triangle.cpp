// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cout<<"enter row"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}