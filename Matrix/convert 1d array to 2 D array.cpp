#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int size;
cout<<"Enter the size of 1D array: "<<endl;
cin>>size;
int *arr = new int[size];
cout<<"Enter the elements of 1D array:"<<endl;

for(int i=0;i<size;i++)
{
cin>>arr[i];
}
 
    int col;
    cout<<"Enter the number of columns for 2 D array: "<<endl;
    cin>>col;

    int row=(size+col-1)/col;

vector<vector<int>> vec(row, vector<int>(col, -1));

for(int i=0;i<size;i++){
    int rownum=i/col;
    int colnum=i%col;
    vec[rownum][colnum]=arr[i];
}
 

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}

 
    return 0;
}