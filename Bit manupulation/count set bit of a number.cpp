#include<bits/stdc++.h>
using namespace std;

int count_bit(int num){
    int cnt=0;

while(num!=0){
    if(num&1)
     cnt++;    
    num=num>>1;
   // time copmlexity o(logn)
} 

return cnt;

}

 
int main()
{
cout<<"enter number\n";
int num;
cin>>num;
 cout<<"total set bit :"<<count_bit(num);
 
    return 0;
}