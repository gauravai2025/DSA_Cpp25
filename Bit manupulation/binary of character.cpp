#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
}
int main(){
   for(char ch='a';ch<='z';ch++){
    cout<<ch<<endl;
 printbinary(int(ch));
   
   }
    for(char ch='A';ch<='Z';ch++){ 
        cout<<ch<<endl; // ch=ch+1;
 printbinary(int(ch));
    
   }

  return 0;
    
}