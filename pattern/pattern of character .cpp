#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

  // here value of a=65 ASCII value of A
  char q='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout<< q<<" ";  // q+i-1
        }
        cout<<endl;
        q+=1;
    }
    
    return 0;
}
