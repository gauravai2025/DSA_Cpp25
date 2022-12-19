// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"enter row";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           // if((i%2==0 && j%2!=0) || (i%2!=0  && j%2==0) )
           if((i+j)%2==0)
            cout<<"1 ";
            else
                cout<<"0 ";
            
        }
        cout<<endl;
    }

    return 0;
}