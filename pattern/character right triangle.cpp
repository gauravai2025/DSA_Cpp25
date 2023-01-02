// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
     cout<<"enter rows\n";
    int row;
    cin>>row;
    char ch='A';
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        if(i>=2)
        ch=ch-i+1;
        cout<<endl;
    }
    
    return 0;
}