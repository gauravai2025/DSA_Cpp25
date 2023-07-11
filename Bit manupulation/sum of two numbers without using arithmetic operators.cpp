#include<bits/stdc++.h>
using namespace std;
 
   int sum(int a , int b)
    {
        //code here
        int ans=0;
        int pos=0;
        int cry=0;
        while(a!=0 || b!=0){
            int x=a&1; int y=b&1;
            int one=0;
            if(x==1)one++;
            if(y==1)one++;
            if(cry==1)one++;
            cry=one>>1;
            if(one&1)
            ans^=(1<<pos);
            b=b>>1;
            a=a>>1;
           pos++;

            
        }
        if(cry)
        ans^=(1<<pos);
        return ans;
    }


int main()
{
cout<<"enter two  numbers to add\n";
  int a,b;
   cin>>a>>b;
   int cry=0;
   cout<<"sum of "<<a<<" and "<<b<<" is: "<<sum(a,b)<<endl;
 
 
 
    return 0;
}