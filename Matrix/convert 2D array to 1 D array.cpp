#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int col;
    cout<<"Enter the number of columns for 2 D array: "<<endl;
    cin>>col;

    int row;
    cout<<"Enter the number of rows for 2 D array: "<<endl;
    cin>>row;

    cout<<"Enter the elements of 2D array:"<<endl;

vector<vector<int>> vec(row, vector<int>(col, -1));

for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){

    cin>>vec[i][j];
}
}
 
int size=row*col;
vector<int> arr(size);

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    int idx=i*col+j;
    arr[idx]=vec[i][j];
}

}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

 
    return 0;
}