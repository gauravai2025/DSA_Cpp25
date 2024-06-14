#include <iostream>
using namespace std;
int main() {
   int a,b;
   cin>>a>>b;
   cout<<(a&b)+(a|b)<<endl;// equivalent a+b
   cout<<2*(a&b)+(a^b)<<endl;// equivalent a+b


    return 0;
}