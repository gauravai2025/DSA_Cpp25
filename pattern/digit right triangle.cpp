
#include <iostream>
using namespace std;
int main() {
    cout<<"enter rows\n";
    int row;
    cin>>row;
    int num=1;
    for(int i=1;i<=row;i++){
        int j;
        for(int r=1;r<=(row-i);r++){
                cout<<" ";
            }
        for( j=1;j<=i;j++){
            if(j==i)
            cout<<num;
            else
            cout<<num<<" ";
            num++;
        }
           
        
        cout<<"\n";
    }
    
    

    return 0;
}