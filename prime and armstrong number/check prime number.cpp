// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,i=2,count=0;
    cin>>n;
    if(n>2){
   
    while(i<n){
        if(n%i==0){
            count=count+1;
            break;
            }
            i=i+1;
                
            
        }
        
   if(count==1)
   cout<<"not prime"<<endl;
   else if(count==0)
   cout<<"prime"<<endl;}
    
 else{
    cout<<"not prime"<<endl;
 }    
    return 0;
}