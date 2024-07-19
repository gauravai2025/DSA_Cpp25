#include<bits/stdc++.h>
using namespace std;

double precision=1e-8;

double bs_sqrt(double num){
  double  lo=0,hi=num;
  double mid=0;

  while(hi-lo>precision){   // time complexity is O(log(n*10^8))

    mid=lo+(hi-lo)/2;

    if(mid*mid<=num)
    lo=mid;
    else
    hi=mid;
  }

  return hi;

}
 
int main()
{

double num;
cout<<"enter the number: \n";
cin>>num;

cout<<fixed<<setprecision(7);

cout<<bs_sqrt(num)<<endl;
cout<<"by using inbuilt function \n";
cout<<pow(num,0.5);
 
    return 0;
}