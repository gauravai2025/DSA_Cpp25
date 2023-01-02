#include<iostream>
using namespace std;
int main(){
    int a=~0;
   int b=1;
    b=~b;
    int c=-1;
    c=~c;
    cout<<a<<b<<c;
    a=~a;
    cout<<a;
    return 0;
}