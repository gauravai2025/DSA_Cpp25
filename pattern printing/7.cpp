#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    // for(int i=1;i<=rows;i++){
    //     for(int j=1;j<=(2*rows-1);j++){
    //         if(j>(rows-1-i+1) && j<=(rows-1+i))
    //         cout<<"* ";
    //         else
    //             cout<<"  ";
    //         }
        
    //     cout<<"\n";
    // }

     for(int i=0;i<rows;i++){

        for(int j=0;j<(rows-i-1);j++){
            // spaces
          
            cout<<" ";
        }

             for(int j=0;j<=(2*i);j++){
            // stars
                cout<<"*";
            }

             for(int j=0;j<(rows-i-1);j++){
            // spaces
          
                cout<<" ";
            }
           
        
        cout<<"\n";
    }
 
    return 0;
}