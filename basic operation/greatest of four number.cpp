
#include <iostream>
using namespace std;

int main()
{
  int a,b,c,d;
  cout<<"enter four number";
  cin>>a>>b>>c>>d;
  int max=a;
  if(max<b)
  max=b;
   if(max<c)
  max=c;
   if(max<d)
  max=d;
  cout<<"greatest number: "<<max;

    return 0;
}
