#include<bits/stdc++.h>
using namespace std;

// void togle_value(int &val,int a,int b){
//     if(val==a)
//     val=b;
//     else
//     val=a;
//     cout<<val;

// }


void togle_value(int &val,int a,int b){
   cout<<(val^a^b);

}
 
int main()
{
int val;
cout<<"enter value of variable\n";
cin>>val;

int a,b;
cout<<"enter two values\n";
cin>>a>>b;
togle_value(val,a,b);

return 0;
}