#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of row\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=0;
        for(int j=1;j<=i;j++){
           cout<<i-a<<" ";  
           a+=1;
        }
        
        cout<<endl;
    }
    return 0;
}