#include<bits/stdc++.h>
using namespace std;

int count_bit(int num){
    if(num==0){
        return 0;
    }
     int x=log2(num);
       int countbituptopower2=(1<<(x-1))*x;
       int msbfrompower2=num+1-(1<<x);
       int rest=num-(1<<x);
        return countbituptopower2 + msbfrompower2+count_bit(rest);
      

}

 
int main()
{
cout<<"enter number\n";
int n;
cin>>n;
int ans=count_bit(n);
cout<<"number of set bits upto n are: "<<ans<<endl;
 
    return 0;
}