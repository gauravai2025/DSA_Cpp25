#include <iostream>
using namespace std;
void printASCII(char c) {
   int i = c;
   cout<<"The ASCII value of "<<c<<" is "<<i<<endl;
}
int main() {
   printASCII('A');
   printASCII('a');
   printASCII('Z');
   printASCII('z');
   printASCII('$');
   printASCII('&');
   printASCII('?');
   return 0;
}