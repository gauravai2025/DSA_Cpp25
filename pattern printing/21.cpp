#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int row;
cout<<"enter number of row:";
cin>>row;

// for(int i=1;i<=row;i++){

//     if(i==1 || i==row){

//      for(int j=1;j<=row;j++){
//         cout<<"*";
//      }
//     }

//     else{
//      cout<<"*";

//      //space
//       for(int j=1;j<=row-2;j++){
//         cout<<" ";
//       }

//      cout<<"*";
//     }

//     cout<<endl;
// }
 
for(int i=1;i<=row;i++){
   for(int j=1;j<=row;j++){
    if(i==1 || i==row || j==1 || j==row)
    cout<<"*";
    else
    cout<<" ";
   }
    cout<<endl;
}
 
 
    return 0;
}