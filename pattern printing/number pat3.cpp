#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row\n";
    cin>>n;
   
 
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=n;j++){
            if(i+j>=5)
         cout<<j<<" ";
           else
             cout<<" "<<" ";
           
        }
        cout<<endl;

    }
    return 0;
}
