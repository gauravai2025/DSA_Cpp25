#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
   

     for(int i=1;i<=rows;i++){
        
        // printing numbers
        for(int j=1;j<=i;j++){
           
            cout<<j;
        }
            // spaces
             for(int j=1;j<=(2*rows-2*i);j++){
                cout<<" ";
            }

             // printing numbers in reverse order

            for(int j=i;j>=1;j--){
           
            cout<<j;
        }
           
        cout<<"\n";
    }
 
    return 0;
}