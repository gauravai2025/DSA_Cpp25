#include <iostream>
using namespace std;
int main()
{   int num;
    cout<<"enter year";
    cin>>num;
    if(num%400==0|| num%100!=0 && num%4==0)
    cout<<"leap year";
    else
    cout<<"not leap year";
    return 0;
}
