// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int rows,cols;
    cout<<"enter no rows"<<endl;
    cin>>rows;
    cout<<"enter columns"<<endl;
    cin>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"*";
            
        }
     cout<<endl;
    }
    

    return 0;
}