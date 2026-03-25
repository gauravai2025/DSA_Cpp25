#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    // int strt=1;

    // for(int i=1;i<=rows;i++){
    //     int flag=strt;
    //     for(int j=1;j<=i;j++){
    //         cout<<flag<<" ";
    //         flag=1-flag;
    //     }
    //     cout<<"\n";
    //     // flipping the strt value
    //     strt=1-strt;
    // }
     
    for(int i=1;i<=rows;i++){
        int flag=0;

        if(i%2==1)
        flag=1;

        for(int j=1;j<=i;j++){
            cout<<flag<<" ";
            flag=1-flag;
        }

        cout<<"\n";
       
    }
 
 
    return 0;
}