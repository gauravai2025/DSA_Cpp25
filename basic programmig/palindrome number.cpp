#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int num){
    int rev_num=0;
    int x=num;
     while(num!=0){
        int digit=num%10;
        rev_num= rev_num*10+digit;
        num=num/10;
    }

if(x==rev_num)
return true;
else
return false;
}

int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
   if(ispalindrome(num))
   cout<<"palindrome";
   else
   cout<<"not";

return 0;

    
}