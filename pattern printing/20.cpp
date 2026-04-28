#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int row;
cout<<"enter row: ";
cin>>row;
 
for(int i=1;i<2*row;i++){
   
    if(i<=row){
    //stars
   
   for(int j=1;j<=i;j++){
    cout<<"*";
   }
 
   // space
   for(int j=1;j<=2*(row-i);j++){
    cout<<" ";
   }

    //stars
   
   for(int j=1;j<=i;j++){
    cout<<"*";
   }

   cout<<endl;

}

else{
    // stars
  for(int j=1;j<=2*row-i;j++){
    cout<<"*";
  }  


  // space
  for(int j=1;j<=2*(i-row);j++){
    cout<<" ";
  }
  
   // stars
  for(int j=1;j<=2*row-i;j++){
    cout<<"*";
  }  
cout<<endl;
} 

}
 
    return 0;
}