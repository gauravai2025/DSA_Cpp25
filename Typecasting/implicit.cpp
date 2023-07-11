#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int a=45+'b'; //implicit typecasting from char to int on basis of ASCII value  int has higher precedence than char
cout<<a<<endl;
 cout<<'b'+'b'<<endl; //implicit typecasting from char to int on basis of ASCII value  int has higher precedence than char
 cout<<5.5+5<<endl; //implicit typecasting from int to float
 
 
    return 0;
}