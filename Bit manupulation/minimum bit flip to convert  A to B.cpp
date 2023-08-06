#include<bits/stdc++.h>
using namespace std;
// int count_bitflip(long long int a,long long int b){
//     long long int chk=1;
//     int count=0;
//     for(int i=0;i<62;i++){
//         if((a&chk)!=(b&chk))  // time complexity O(log2(max(a,b)))
//         count++;
//         chk=chk<<1;
//     }
//     return count;
// }

int count_bitflip(long long int a,long long int b){
    int count=0;
    long long int check=a^b; // if bit different then 1 else 0 in check
    while(check){
        count++;
        check=check&(check-1);  // time complexity number of set bits in chk
    }
    return count;
}
 
int main()
{
cout<<"enter two numbers to check the minimum bit flip to convert A to B:\n";
long long int a,b;
cin>>a>>b;
cout<<"minimum bit flip to convert A to B is: "<<count_bitflip(a,b)<<"\n";
 
 
 
    return 0;
}