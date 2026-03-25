#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int row;
cout<<"Enter the number of rows: ";
cin>>row;   

// for(int i=0;i<row;i++){
//    // space
//     for(int j=0;j<row-1-i;j++)
//     cout<<" ";

//     for(int j=0;j<2*i+1;j++){
//         char ch='A'+j;
//         // for reverse
//         if(j>i)
//          ch='A'+2*i-j;

//         cout<<ch;
//     }

//      // space
//     for(int j=0;j<row-1-i;j++)
//     cout<<" ";

//     cout<<endl;
// }
 

for(int i=0;i<row;i++){
   // space
    for(int j=0;j<row-1-i;j++)
    cout<<" ";
    
      char ch='A';
    for(int j=0;j<2*i+1;j++){
      
        // for reverse
        cout<<ch;
        
        if(j>=i)
         ch--;
        else
        ch++;

    }

     // space
    for(int j=0;j<row-1-i;j++)
    cout<<" ";

    cout<<endl;
}
 
 
 
    return 0;
}