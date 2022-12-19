#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

  // here value of a=65 ASCII value of A
  
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            char var='A'+i;
            cout<<var<<" ";  
        }
        cout<<endl;
        
    }
    
    return 0;
}
