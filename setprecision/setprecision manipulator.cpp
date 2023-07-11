#include<bits/stdc++.h>
using namespace std;
 
int main()
{
double a=45.2233412242,b=2456.0,c=324e-3;
cout<<a<<endl<<b<<endl<<c<<endl;

cout<<"--------------------------------------------\n";
cout<<setprecision(4)<<a<<endl<<b<<endl<<c<<endl;
cout<<"--------------------------------------------\n";

 cout<<a<<endl<<b<<endl<<c<<endl;   // same precision as above precision is set
 double val=32e-5;
 cout<<val<<setprecision(2)<<endl;
 double num=51.32;
  cout<<setprecision(5)<<num<<endl;
double num1=32.6754;
  cout<<setprecision(2)<<num1<<endl;
  float ls=74.74267381;
    cout<<setprecision(7)<<ls<<endl;  // wrong output due to float have 6 digit precision so get more precision use dpuble
  double mpr=74.74267381;
  cout<<setprecision(10)<<mpr<<endl;
 double pr=7789.72771231238921;
    cout<<setprecision(10)<<pr<<endl;
        cout<<setprecision(9)<<pr<<endl;

    cout<<setprecision(8)<<pr<<endl;
    cout<<setprecision(6)<<pr<<endl;
cout.precision(5);
cout<<pr<<endl;

 
    return 0;
}