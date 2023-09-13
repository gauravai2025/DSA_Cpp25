#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 cout<<"enter row of matrix\n";
int row;
cin>>row;
cout<<"enter column of matrix\n";

int col;
cin>>col;
int a[row][col];
cout<<"enter element of matrix\n";

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>a[i][j];
    }
}
if(row!=col){
    cout<<"matrix is not symmetric\n";
    return 0;
}

 int b[col][row];
// find transpose of matrix
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        b[j][i]=a[i][j];
    }
}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(a[i][j]!=b[i][j]){
            cout<<"matrix is not symmetric\n";
            return 0;
        }
    }

}
cout<<"matrix is symmetric\n";
 
 
    return 0;
}