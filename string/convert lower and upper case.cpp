#include<bits/stdc++.h>
using namespace std;
 
int main()
{
char ch;
cout<<"enter character : ";
cin>>ch;
// lower case to upper case
if(ch>='a' && ch<='z')
cout<<char(ch-'a'+'A')<<endl;
else
cout<<(ch-'A'+'a')<<endl;

    return 0;
}