#include<bits/stdc++.h>
using namespace std;
int count_setbit(long long int num){
    int cnt=0;
    for(int i=62;i>=0;i--){
        if((num>>i)&1)
        cnt++;
    }
    return cnt;
}
 
int main()
{
 cout<<"enter number\n";
long long int num;
cin>>num;
 cout<<"total number of bit :"<<count_setbit(num);
    return 0;
}