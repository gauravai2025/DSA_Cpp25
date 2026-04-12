#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int row;
cout<<"Enter the number of rows: ";
cin>>row;
 
for(int i=0;i<2*row;i++){

    if(i<row){
    // stars
    for(int j=0;j<row-i;j++){
        cout<<"*";
    }

     // space

     for(int j=0;j<2*i;j++){
        cout<<" ";
     }

     // stars
    for(int j=0;j<row-i;j++){
        cout<<"*";
    }
  cout<<endl;
}

else{
 // stars
 
 for(int j=0;j<i-row+1;j++){
    cout<<"*";
 }

 // space
 for(int j=0;j<4*row-2-2*i;j++){
    cout<<" ";
 }

  // stars
 
 for(int j=0;j<i-row+1;j++){
    cout<<"*";
 }

   cout<<endl;
}

  
}
 
 
    return 0;
}