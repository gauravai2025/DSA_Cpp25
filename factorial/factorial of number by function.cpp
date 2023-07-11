
#include <iostream>
using namespace std;


    
   long long  int factorial(int n){
     long long    int fact=1;
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
    int main() {
        int n;
        cout<<"enter number";
        cin>>n;
        long long int k=factorial(n);
        cout<<k<<endl;

    return 0;
}