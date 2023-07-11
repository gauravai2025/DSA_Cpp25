#include<bits/stdc++.h>
using namespace std;
void tobinary(long long int n,int pos){
    for(int i=pos;i>=0;i--){
        cout<<((n>>i)&1);
    }
     
 }
int main()
{
cout<<"enter number\n";
long long int n;
cin>>n;
long long int x=~n+1;
//tobinary(x&n);
cout<<"position of right most set bit:\n";
long long int ans=(x&n);
int pos=log2(ans);
cout<<pos<<endl;
cout<<"value of the number:\n";
 cout<<(ans)<<endl;
 cout<<"binary representation\n";
 tobinary(ans,pos);
    return 0;

}