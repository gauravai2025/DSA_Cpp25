#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row\n";
    cin>>n;
 
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            char var='A'+i+j;
            cout<<var<<" ";  
             
        }
     
        cout<<endl;

    }
    return 0;
}
