#include<bits/stdc++.h>
using namespace std;

void print_divisor(int num){
   
    for(int i=1;i*i<=num;i++){ // time complexity o(sqrt(n))
        if(num%i==0){
            cout<<i<<" ";
            if(i!=num/i)
            cout<<num/i<<" ";
        }
    }
}
 
int main()
{

int num;
cout<<" enter number\n";
cin>>num;
print_divisor(num);

    return 0;
}