#include<iostream>
using namespace std;

int main() {
    
    int a, b;

    cout <<" Enter the value of a "<<endl;
    cin >> a;

    cout<<" Enter the value of b " <<endl;
    cin >> b;

while(1){
    char op;
    cout<<" Enter the Operation you want to perform" <<endl;
    cin >> op;

    switch( op ) {

        case '+':  cout <<"sum :"<< (a+b) <<endl; 
                  exit(0);

        case '-': cout<<"difference: "<< (a-b) <<endl;
                   exit(0); 

        case '*': cout<<"multiply: "<< (a*b) <<endl;
                   exit(0);

        case '/': cout<<"divide: "<< (a/b) <<endl;
                    exit(0);

        case '%': cout<<"remainder: "<< (a%b) <<endl;
                   exit(0);

        default: cout << "Please enter a valid Operation " << endl;

    }
}
  
    return 0;
}