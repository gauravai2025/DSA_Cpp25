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
cout<<"snake pattern traversal of matrix\n";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i&1)
        cout<<a[i][col-1-j]<<" ";
        else
        cout<<a[i][j]<<" ";
    }
}

 
 
 
    return 0;
}