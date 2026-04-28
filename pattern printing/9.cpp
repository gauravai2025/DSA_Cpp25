#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=(2*rows-1);j++){
            if(j>(rows-1-i+1) && j<=(rows-1+i))
            cout<<"* ";
            else
                cout<<"  ";
            }
        
        cout<<"\n";
    }

      for(int i=rows;i>0;i--){
        for(int j=1;j<=(2*rows-1);j++){
            if(j>(rows-1-i+1) && j<=(rows-1+i))
            cout<<"* ";
            else
                cout<<"  ";
            }
        
        cout<<"\n";
    }
 
    return 0;
}