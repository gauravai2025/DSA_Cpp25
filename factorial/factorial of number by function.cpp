// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


    // Write C++ code here
    int factorial(int n){
        int fact=1;
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
    int main() {
        int n;
        cout<<"enter number";
        cin>>n;
        int k=factorial(n);
        cout<<k<<endl;

    return 0;
}