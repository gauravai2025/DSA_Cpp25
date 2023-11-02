#include<bits/stdc++.h>
using namespace std;

int cnt_setbit(int num){
    int cnt=0;

    while(num!=0){
        cnt++;
        num=num-(num&(-num));

    }
return cnt;
}
 
int main()
{
cout<<"enter number\n";
int num;
cin>>num;
if(cnt_setbit(num)==1)
  cout<<"power of 2";
  else
 cout<<"not power of 2";
    return 0;
}