#include<bits/stdc++.h>
using namespace std;
int max1(int a,int b)
{
    return a-(a-b)*(a<b);
}
int min1(int a,int b)
{
    return a-(a-b)*(a>b);
}   
 int max2(int a,int b)
 {
     return a^((a^b)&-(a<b));
 }
    int min2(int a,int b)
    {
        return b^((a^b)&-(a<b));
    }
int main()
{
    cout<<"Enter two numbers:\n";
int a,b;
cin>>a>>b;
cout<<"Maximum number is:"<<max1(a,b)<<endl;
cout<<"Maximum number is:"<<max2(a,b)<<endl;
cout<<"Minimum number is:"<<min2(a,b)<<endl;
cout<<"Minimum number is:"<<min1(a,b)<<endl;
 
 
 
    return 0;
}