#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row\n";
    cin>>n;
 
    for(int i=0;i<n;i++){
       
        for(int j=0;j<=i;j++){
             char var='D';
             var=var+j-i;
        
            cout<<var<<" ";  
            
        }
        cout<<endl;

    }
    return 0;
}
