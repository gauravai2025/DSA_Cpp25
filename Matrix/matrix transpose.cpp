#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number of row of  matrix\n";
int row;
cin>>row;
cout<<"enter number of column of matrix\n";
int col;
cin>>col;
int a[row][col];
cout<<"enter element of matrix\n";

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>a[i][j];
    }
}
int b[col][row];

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        b[j][i]=a[i][j];
    }
}
cout<<"transpose of matrix\n";

for(int i=0;i<col;i++){ 
    for(int j=0;j<row;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}