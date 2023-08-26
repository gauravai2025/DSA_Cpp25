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
cout<<"column wise alternate direction traversal of matrix\n";
   for(int j=0;j<col;j++){
    if(flag){
 for(int i=0;i<row;i++){
        cout<<a[i][j]<<" ";
    }
    }
    else{
        for(int i=row-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }

    }
    cout<<endl;
  
    flag=!flag;
}
    return 0;
}