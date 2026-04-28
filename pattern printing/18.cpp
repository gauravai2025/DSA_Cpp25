#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int rows;
cout<<"Enter the number of rows: ";
cin>>rows;

for(int i=0;i<rows;i++){
    char strt='A'+rows-1-i;
    for(char ch=strt;ch<=strt+i;ch++){
     cout<<ch;
    }
    cout<<endl;
}
 
 
 return 0;
}