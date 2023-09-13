#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number of row of for square matrix\n";
int row;
cin>>row;

cout<<"enter element of matrix\n";
int a[row][row];

for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
        cin>>a[i][j];
    }
}

for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
        if(i>j){
            swap(a[i][j],a[j][i]);
        }
    }
}

cout<<"transpose of matrix\n"

for(int i=0;i<row;i++){
    for(int j=0;j<row;j++){
         cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}