/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);   // binary in 32 bit
    }
  
}

int main()
{
    int val=0x55555555;  // binary representation of val 01010101010101010101010101010101
    cout<<val<<endl;
    printbinary(val);

    return 0;
}
