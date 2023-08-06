#include<bits/stdc++.h>
using namespace std;

// bool ispowerof4(long long int num){
//     long long int chk=1;   time complexity O(log4(num))
//     for(int i=0;i<62;i++){   space complexity O(1)
//         if(chk==num)
//         return true;
//         chk=chk<<2;

//     }
// }

 bool ispowerof4(long long int num) {
        if(num<=0)       //time complexity O(1)
                            // space complexity O(1)
        return false;
        if( ((num&(num-1))==0) && (num%3==1))
        return 1;
        else
        return 0;
    }

 
int main()
{
cout<<"enter number to check the power of 4:\n";
long long int num;
cin>>num;
if(ispowerof4(num))
cout<<"yes\n";
else
cout<<"no\n";
    return 0;
}