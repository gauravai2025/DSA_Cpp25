#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
         if(i==1 || i==rows || j==1 || j==cols){
             cout<<"* ";
         }
         else{
             cout<<"  ";
         }
           
        }
        cout<<"\n";
    }
 
 
 
    return 0;
}