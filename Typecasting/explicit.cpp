#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 float a=5/2;  //implicit typecasting from int to float after integer division
    cout<<a<<endl;
    float b=(float)5/2; //explicit typecasting from int to float and division is done on float
    cout<<b<<endl;
    int c=(float)(5/2); //explicit typecasting from float to int since variable define int  and division is done on float
    cout<<c<<endl;
 cout<<(float)5/2<<endl; //explicit typecasting from int to float and division is done on float
 float num = (float)(5/2);  // due to parenthesis 5/2 is evaluated first and then typecasted to float
 cout<<num;
 
    return 0;
}