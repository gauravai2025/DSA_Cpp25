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

bool flag=true;
cout<<"Wave traversal of matrix\n";
   for(int j=0;j<col;j++){
    if(flag){  // if(j%2==0) column is even then then row is traversed from top to bottom row increses
 for(int i=0;i<row;i++){
        cout<<a[i][j]<<" ";
    }
    }
    else{  // if(j%2!=0) column is odd then then row is traversed from bottom to top  row decreases
        for(int i=row-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }

    }
  
    flag=!flag;
}
    return 0;
}