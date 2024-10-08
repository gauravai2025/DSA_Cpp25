#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter row\n";
    cin>>n;
   int a=1;
 
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=n;j++){

            if(i>j)
         cout<<" "<<" ";
         
           else{
             cout<<a<<" ";
             a+=1;
             }
           
        }
        cout<<endl;

    }
    return 0;
}
