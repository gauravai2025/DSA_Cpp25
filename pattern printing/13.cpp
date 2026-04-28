#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    int cnt=1;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<"\n";
    }
 
 
 
    return 0;
}