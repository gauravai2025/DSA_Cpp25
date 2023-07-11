#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int val=2;
loop:cout<<7<<" is lucky number"<<endl; 
do{
   
    if(val==6){ 
        // conditional goto statement
            val++;
    goto loop;
    }
    else
     val++;
     cout<<val<<endl;
}
while(val<10);  
    return 0;
}