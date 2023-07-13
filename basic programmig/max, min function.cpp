#include<bits/stdc++.h>
using namespace std;
  int max1(int a,int b)
  {
      if(a>b)
      return a;
      else
      return b;
  }


    int min1(int a,int b)
    {
        if(a<b)
        return a;
        else
        return b;
    }
    
int main()
{
    cout<<"Enter two numbers:\n";
int a,b;
cin>>a>>b;
 cout<<"Maximum number is:"<<max1(a,b)<<endl;
    cout<<"Minimum number is:"<<min1(a,b)<<endl;
 
 
    return 0;
}