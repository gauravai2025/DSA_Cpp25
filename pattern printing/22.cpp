#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int row;
cout<<"enter number of row:\n";
cin>>row;

for(int i=0;i<2*row-1;i++){
   for(int j=0;j<2*row-1;j++){
    cout<<(row-min(i,min(j,min(2*row-2-i,2*row-2-j))));
   }
    cout<<endl;
}
 
return 0;
}