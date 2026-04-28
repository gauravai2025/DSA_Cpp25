#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

  // here value of a=65 ASCII value of A
 
    for(int i=1;i<=n;i++){
         char q='A';
        for(int j=1;j<=n;j++){
            cout<<q<<" ";  // q+i-1
             q+=1;
        }
        cout<<endl;
       
    }
    
    return 0;
}
