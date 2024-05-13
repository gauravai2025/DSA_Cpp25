#include<bits/stdc++.h>
using namespace std;
 
int main()
{

double num;
cin>>num;

//  int n=int(num);
//  if(n==num)
//  cout<<"int"<<" "<<n<<endl;
//  else{
//     cout<<"float"<<" "<<n<<" "<<(num-n)<<endl;
//  }

if(floor(num)==ceil(num))
 cout<<"int"<<" "<<(int)num<<endl;
 else{
    cout<<"float"<<" "<<floor(num)<<" "<<(num-floor(num))<<endl;
 }
    return 0;
}