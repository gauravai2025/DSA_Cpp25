#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
 //int combination(int n, int r){
   // int k=factorial(n)/((factorial(r))*(factorial(n-r)));
    //return k;
 
int main(){
    int n;
    cout<<"enter number of row\n";
    
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/((factorial(j))*(factorial(i-j)))<<" ";
        }
        cout<<"\n";
    }
    return 0;

}