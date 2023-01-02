// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    cout<<"enter rows\n";
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        int j;
        for(int r=1;r<=(row-i);r++){
                cout<<" ";
            }
        for( j=1;j<=i;j++){
            
            cout<<j<<" ";
        }
            for(int k=j-2;k>=1;k--){
                cout<<k<<" ";
            }
        
        cout<<endl;
    }
    
    

    return 0;
}