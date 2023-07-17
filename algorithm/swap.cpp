#include<bits/stdc++.h>
using namespace std;
void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){

    int a,b;
    cout<<"enter 1st number\n";
    cin>>a;
    cout<<"enter 2nd number\n";
    cin>>b;

    swap(a,b);
    cout<<a<<b;
    cout<<"\n";
    swap1(a,b);
    cout<<a<<b;
    return 0;
}