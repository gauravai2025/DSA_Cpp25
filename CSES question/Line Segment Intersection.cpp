#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){
long long int  x1,x2,x3,y1,y2,y3,x4,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
// long long int val1=(x4-x3)*(y2-y1)-(x2-x1)*(y4-y3);
// long long int val2=(x3-x2)*(y2-y1)-(x2-x1)*(y3-y2);
// long long int val3=(x2-x1)*(y4-y2)-(x4-x2)*(y2-y1);
long long int val1=(x3-x2)*(y2-y1)-(x2-x1)*(y3-y2);
long long int val2=(x4-x2)*(y2-y1)-(x2-x1)*(y4-y2);
long long int val3=(x3-x1)*(y4-y3)-(x4-x3)*(y3-y1);
long long int val4=(x3-x2)*(y4-y3)-(x4-x3)*(y3-y2);




if((val1*val2)<0 && (val3*val4)<0)
cout<<"YES\n";
else{
if(val1==0 && val2==0)
cout<<"YES\n";
else
cout<<"NO\n";
}


 
}
    return 0;
}