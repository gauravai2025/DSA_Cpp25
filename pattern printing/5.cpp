#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;

    // for(int i=rows;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }
 

      for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i+1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
 
 
    return 0;
}