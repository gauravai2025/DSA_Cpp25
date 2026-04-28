#include<bits/stdc++.h>
using namespace std;

void printname(string &name,int n){

    if(n==0)
    return ;

   cout<<name<<" ";

   printname(name,n-1);
}
 
int main()
{

    string name;
    cout<<"Enter the name: ";
    cin>>name;
    int n;
    cout<<"Enter the number of times you want to print the name: ";
    cin>>n;
    printname(name,n);
 
 
 
    return 0;
}