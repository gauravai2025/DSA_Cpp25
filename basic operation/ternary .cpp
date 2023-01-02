#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 numbers"<<"\n";
    cin>>a>>b>>c;
    (a>b)?((a>c)?cout<<a<<"  is largest":cout<<c<<"  is largest"):((b>c)?cout<<b<<"  is largest":cout<<c<<"  is largest");
    return 0;
}
