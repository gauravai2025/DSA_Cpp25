#include<iostream>
using namespace std;
int main(){
    char ch[30];
    cout<<"enter your name\n";
    cin>>ch;
    ch[3]='\0';    // after index 3 cout stop working its null //charcter 
    cout<<"your name is "<<ch;

    return 0;
}
