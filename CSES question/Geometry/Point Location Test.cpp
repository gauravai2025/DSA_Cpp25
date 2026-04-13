#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--){
long long int  x1,x2,x3,y1,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
long long int val=(x3-x2)*(y2-y1)-(x2-x1)*(y3-y2);
if(val<0)
cout<<"LEFT\n";
else if(val>0)
cout<<"RIGHT\n";
else
cout<<"TOUCH\n";

// // equation of line
// if(x1==x2)
// slope1=INT_MAX;
// else{   
//     slope1= 1.0*(y2-y1)/(x2-x1);
  
// }
 
//  if(x2==x3)
// slope2=INT_MAX;
// else{   
//    slope2= 1.0*(y3-y2)/(x3-x2);
  
// }

// // cout<<slope1<<" "<<slope2<<"\n";
// if(slope1==slope2)
// cout<<"TOUCH\n";
// else if(slope1>slope2)
// cout<<"LEFT\n";
// else
// cout<<"RIGHT\n";
// }
 
}
    return 0;
}