#include<iostream>
using namespace std;
int main(){
    cout<<"enter number of row\n";
    int n;
    cin>>n;
char a='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}
