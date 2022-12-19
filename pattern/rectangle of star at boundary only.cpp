// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int r,c;
    cout<<"enter row"<<endl;
    cin>>r;
    cout<<"enter columns"<<endl;
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i!=1 && i!=r && j!=1 && j!=c)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}