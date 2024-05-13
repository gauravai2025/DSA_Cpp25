/******************************************************************************

                 Gaurav Kumar
                 
*******************************************************************************/

#include <iostream>
using namespace std;

#define mod 1000000000+7
#define mod4 10000000007

const int mod3=100000000+7;
const int mod2=100000007;

int main()
{
    long long int val=20;
    
    cout<<20%mod<<endl;
    cout<<val%(mod)<<endl;
    cout<<val%mod4<<endl;
    cout<<val%mod2<<endl;
    cout<<val%mod3<<endl;
   
    return 0;
}
