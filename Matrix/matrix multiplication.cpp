#include<bits/stdc++.h>
using namespace std;
 
int main()
{
cout<<"enter number of row of 1st matrix\n";
int row1;
cin>>row1;
cout<<"enter number of column of 1st matrix\n";

int col1;
cin>>col1;
int a[row1][col1];
cout<<"enter element of 1st matrix\n";

for(int i=0;i<row1;i++){
    for(int j=0;j<col1;j++){
        cin>>a[i][j];
    }
}

cout<<"enter number of row of 2nd matrix\n";
int row2;
cin>>row2;
cout<<"enter number of column of 2nd matrix\n";

int col2;
cin>>col2;
int b[row2][col2];
cout<<"enter element of 2nd matrix\n";

for(int i=0;i<row2;i++){
    for(int j=0;j<col2;j++){
        cin>>b[i][j];
    }
}

if(col1!=row2){
    cout<<"matrix multiplication not possible\n";
}

else{
    int multi[row1][col2];
    for(int i=0;i<row1;i++){
    for(int k=0;k<col2;k++){
         multi[i][k]=0;
    for(int j=0;j<col1;j++){
      
        multi[i][k]+= (a[i][j]*b[j][k]);
    }
   
    }
       
}


cout<<"matrix multiplication of 1st and 2nd matrix\n";
for(int i=0;i<row1;i++){
    for(int j=0;j<col2;j++){
        cout<<multi[i][j]<<" ";
    }
    cout<<endl;
 
}

}
 
 
 
    return 0;
}