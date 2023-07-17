#include<iostream>
using namespace std;

int chartodigit(char ch){
    int val=ch-'0';
    return val;
}
char tolowercase(char ch){
   ch=ch-'A'+'a'; // ch=ch+32;
    return ch;
    
}
char touppercase(char ch){
    ch=ch-'a'+'A'; // ch=ch-32;
    return ch;
}
    int main(){
  cout<<"enter character \n";
  char chd;
  cin>>chd;
  cout<<chartodigit(chd);
  cout<<endl;
  cout<<"enter uppercase letter to convert\n";
   char ch1;
   cin>>ch1;
   cout<<tolowercase(ch1)<<endl;
   cout<<"enter lowercase letter to convert\n";
   char ch2;
   cin>>ch2;
  cout<< touppercase(ch2)<<endl;

        return 0;
    }