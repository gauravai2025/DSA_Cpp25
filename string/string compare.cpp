
#include <iostream>
using namespace std;
int main()
{ 
    int val='\0';  // null character
    int val1='0' ;//zero as a character 
    cout<<val<<" ";
    cout<<val1<<" ";
    string str1;
    string str2;
    cout<<"enter first string\n";
    cin>>str1;
     cout<<"enter second string\n";
    cin>>str2;
    if(str1==str2)
    cout<<"equal";
    else if(str1>str2)
    cout<<"greater than"<<endl;
    else  if(str1<str2)
    cout<<"less than"<<endl;
    int num=65;
  char c='A';
  if(num>=c)
  cout<<"greater than"<<endl;
cout<<str1.size()<<endl;
cout<<str1.length()<<endl;;

    return 0;
}
