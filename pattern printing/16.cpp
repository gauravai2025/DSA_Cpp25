#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;

    for(int i=1;i<=rows;i++){
          char ch='A'+i-1;
        for(int j=1;j<=i;j++){
          
            cout<<ch;
           
        }
        cout<<"\n";
    }

    
 
 
 
    return 0;
}