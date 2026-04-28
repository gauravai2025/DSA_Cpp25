#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;

    // for(int i=1;i<=rows;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch='A'+j-1;
    //         cout<<ch;
           
    //     }
    //     cout<<"\n";
    // }
 
       for(int i=1;i<=rows;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch;
           
        }
        cout<<"\n";
    }
 
 
    return 0;
}